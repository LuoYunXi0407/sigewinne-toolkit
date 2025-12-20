#pragma once
#include <string>
#include <filesystem>


namespace Service::LaunchGame
{

	inline std::wstring g_path;

	static void LaunchGameImpl(const std::filesystem::path& fs_path);

	static void GetLaunchGameParms();

	static void SetIfHDROn();

	void Launch();


} 