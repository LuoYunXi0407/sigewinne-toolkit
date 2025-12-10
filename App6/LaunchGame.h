#pragma once
#include <Windows.h>
#include <string>
#include <filesystem>


namespace Service::LaunchGame
{

inline std::wstring s_path;

static void LaunchGameImpl(const std::filesystem::path& fs_path);

void Launch();

} 