#pragma once

#include "SettingsCard.g.h"

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;


namespace winrt::App6::implementation
{
	struct SettingsCard : SettingsCardT<SettingsCard>
	{
		SettingsCard();

		IInspectable Header();
		void Header(Windows::Foundation::IInspectable value);
		static DependencyProperty HeaderProperty();

		IInspectable Description();
		void Description(Windows::Foundation::IInspectable value);
		static DependencyProperty DescriptionProperty();

		IconElement HeaderIcon();
		void HeaderIcon(Windows::Foundation::IInspectable value);
		static DependencyProperty HeaderIconProperty();

		IconElement ActionIcon();
		void ActionIcon(Windows::Foundation::IInspectable value);
		static DependencyProperty ActionIconProperty();

		hstring ActionIconToolTip();
		void ActionIconToolTip(hstring value);
		static DependencyProperty ActionIconToolTipProperty();

		bool IsClickEnabled();
		void IsClickEnabled(bool value);
		static DependencyProperty IsClickEnabledProperty();

		bool IsActionIconVisible();
		void IsActionIconVisible(bool value);
		static DependencyProperty IsActionIconVisibleProperty();

		ContentAlignment ContentAlignment();
		void ContentAlignment(App6::ContentAlignment value);
		static DependencyProperty ContentAlignmentProperty();

	private:
		static DependencyProperty s_HeaderProperty;
		static DependencyProperty s_DescriptionProperty;
		static DependencyProperty s_HeaderIconProperty;
		static DependencyProperty s_ActionIconProperty;
		static DependencyProperty s_ActionIconToolTipProperty;
		static DependencyProperty s_IsClickEnabledProperty;
		static DependencyProperty s_IsActionIconVisibleProperty;
		static DependencyProperty s_ContentAlignmentProperty;
	};
}

namespace winrt::App6::factory_implementation
{
	struct SettingsCard : SettingsCardT<SettingsCard, implementation::SettingsCard>
	{
	};
}
