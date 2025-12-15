#pragma once

#include "Settings.pb.h"

namespace Service::Settings
{
	inline Service::Proto::Settings g_settings;

	void LoadSettingsFromFile();

	void WriteSettingsToFile();

}



