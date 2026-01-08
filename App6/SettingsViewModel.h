#pragma once
#include "Settings.h"
#include "SettingsViewModel.g.h"
using namespace Service::Settings;
namespace winrt::App6::implementation
{
    struct SettingsViewModel : SettingsViewModelT<SettingsViewModel>, wil::notify_property_changed_base<SettingsViewModel>
    {
		SettingsViewModel();

        bool StealthMode();
        void StealthMode(bool value);

        void RestrictedTokens(bool value);
        bool RestrictedTokens();

        bool LangOverride();
        void LangOverride(bool value);

        void LangCombo_SelectionChanged(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Controls::SelectionChangedEventArgs const& e);

        void GamePath(hstring value);
        hstring GamePath();

        winrt::event_token PropertyChanged(winrt::Microsoft::UI::Xaml::Data::PropertyChangedEventHandler const& handler);
        void PropertyChanged(winrt::event_token const& token) noexcept;

    private:
        hstring m_gamePath{};
        winrt::event<winrt::Microsoft::UI::Xaml::Data::PropertyChangedEventHandler> m_propertyChanged;

    };
}

namespace winrt::App6::factory_implementation
{
    struct SettingsViewModel : SettingsViewModelT<SettingsViewModel, implementation::SettingsViewModel>
    {
    };
}