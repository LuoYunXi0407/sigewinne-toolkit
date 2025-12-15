#include "pch.h"
#include "Settings.h"
#include "Windows.h"
#include <wil/resource.h>
#include "wil/result.h"
#include <filesystem>

namespace Service::Settings
{
	void LoadSettingsFromFile()
	{
		wchar_t exe_path[MAX_PATH];
		THROW_LAST_ERROR_IF(!GetModuleFileNameW(NULL, exe_path, MAX_PATH));
		std::filesystem::path tmp(exe_path);
		tmp.remove_filename() /= L"config";
		wil::unique_handle hFile(
			CreateFileW(
				tmp.c_str(),
				GENERIC_READ | GENERIC_WRITE, 0, 
				NULL,
				OPEN_EXISTING, 
				FILE_ATTRIBUTE_NORMAL,
				NULL
			)
		);
		THROW_LAST_ERROR_IF(!hFile);

		auto file = hFile.get();
		LARGE_INTEGER size;
		THROW_IF_WIN32_BOOL_FALSE(GetFileSizeEx(file, &size));

		const auto parr = std::make_unique<char[]>(size.QuadPart);
		const auto ptr = parr.get();

		BOOL isRead = ReadFile(file, ptr, size.QuadPart, NULL, NULL);
		THROW_IF_WIN32_BOOL_FALSE(isRead);
		THROW_HR_IF(E_FAIL, !g_settings.ParseFromArray(ptr, size.QuadPart));

	}

	void WriteSettingsToFile()
	{
		const int  size = static_cast<int>(g_settings.ByteSizeLong());
		const auto parr = std::make_unique<char[]>(size);
		const auto ptr = parr.get();
		g_settings.SerializeToArray(ptr, size);

		wchar_t exe_path[MAX_PATH];
		THROW_LAST_ERROR_IF(!GetModuleFileNameW(NULL, exe_path, MAX_PATH));
		std::filesystem::path tmp(exe_path);
		tmp.remove_filename() /= L"config";
		wil::unique_handle hFile(
		CreateFileW(
			tmp.c_str(),
				GENERIC_READ | GENERIC_WRITE,
				0, NULL,
				CREATE_ALWAYS,
				FILE_ATTRIBUTE_NORMAL,
				NULL)
		);
		THROW_LAST_ERROR_IF(!hFile);
		THROW_IF_WIN32_BOOL_FALSE(WriteFile(hFile.get(), ptr, size, NULL, NULL));

	}

	void a()
	{

		//auto str = to_string(Service::LaunchGame::g_path);
		//g_settings.mutable_home()->set_gamepath(str);
		g_settings.mutable_home()->mutable_launchgame()->set_usinghoyolabaccount(true);
		g_settings.mutable_home()->mutable_launchgame()->set_arecommandlineargumentsenabled(true);
		g_settings.mutable_home()->mutable_launchgame()->set_iswindowshdrenabled(true);
		g_settings.mutable_home()->mutable_launchgame()->set_isfullscreen(false);
		g_settings.mutable_home()->mutable_launchgame()->set_isscreenheightenabled(true);
		g_settings.mutable_home()->mutable_launchgame()->set_screenwidth(1920);
		g_settings.mutable_home()->mutable_launchgame()->set_screenheight(1080);
		g_settings.mutable_home()->mutable_launchgame()->set_isscreenwidthenabled(true);
		g_settings.mutable_home()->mutable_island()->set_enablesetfieldofview(true);
		g_settings.mutable_home()->mutable_island()->set_fieldofview(75);
		g_settings.mutable_home()->mutable_island()->set_fixlowfovscene(true);
		g_settings.mutable_home()->mutable_island()->set_disablefog(true);
		g_settings.mutable_home()->mutable_island()->set_enablesettargetframerate(true);
		g_settings.mutable_home()->mutable_island()->set_targetframerate(120);
		g_settings.mutable_home()->mutable_island()->set_removeopenteamprogress(true);
		g_settings.mutable_home()->mutable_island()->set_hidequestbanner(true);
		g_settings.mutable_home()->mutable_island()->set_disableeventcameramove(true);
		//google::protobuf::util::MessageToJsonString(s, &json);
	}
}

