#include "pch.h"
#include "SettingsViewModel.h"
#if __has_include("SettingsViewModel.g.cpp")
#include "SettingsViewModel.g.cpp"
#endif

namespace winrt::App6::implementation
{
    SettingsViewModel::SettingsViewModel()
    {
		;
    }

	bool SettingsViewModel::StealthMode()
	{
		return pappsettings->stealthmode();
	}

	void SettingsViewModel::StealthMode(bool value)
	{
		pappsettings->set_stealthmode(value);
	}

	bool SettingsViewModel::RestrictedTokens()
	{
		return pappsettings->restrictedtokens();
	}

	void SettingsViewModel::RestrictedTokens(bool value)
	{
		pappsettings->set_restrictedtokens(value);
	}

	bool SettingsViewModel::LangOverride()
	{
		return pappsettings->langoverride();
	}

	void SettingsViewModel::LangOverride(bool value)
	{
		pappsettings->set_langoverride(value);
	}

	void SettingsViewModel::GamePath(hstring value)
	{
		pappsettings->set_gamepath(to_string(value));

		if (m_gamePath != value)
		{
			m_gamePath = value;
	
			m_propertyChanged(*this, Microsoft::UI::Xaml::Data::PropertyChangedEventArgs{ L"GamePath" });
		}

		
	}

	winrt::event_token SettingsViewModel::PropertyChanged(winrt::Microsoft::UI::Xaml::Data::PropertyChangedEventHandler const& handler)
	{
		return m_propertyChanged.add(handler);
	}

	void SettingsViewModel::PropertyChanged(winrt::event_token const& token) noexcept
	{
		m_propertyChanged.remove(token);
	}

	hstring SettingsViewModel::GamePath()
	{
		return to_hstring(pappsettings->gamepath());
	}
}