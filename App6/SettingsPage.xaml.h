#pragma once

#include "SettingsPage.g.h"

namespace winrt::App6::implementation
{
    struct SettingsPage : SettingsPageT<SettingsPage>
    {
        SettingsPage();
        bool StealthMode();
        void StealthMode(bool value);
    };
}

namespace winrt::App6::factory_implementation
{
    struct SettingsPage : SettingsPageT<SettingsPage, implementation::SettingsPage>
    {
    };
}
