#include "pch.h"
#include "SettingsCard.h"
#if __has_include("SettingsCard.g.cpp")
#include "SettingsCard.g.cpp"
#endif


#include <winrt/Microsoft.UI.Windowing.h>
#include <winrt/Windows.UI.Xaml.Interop.h>

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;
using namespace winrt::Windows::Foundation;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App6::implementation
{
	SettingsCard::SettingsCard()
	{
		DefaultStyleKey(box_value(L"App6.SettingsCard"));
	}

	IInspectable SettingsCard::Header()
	{
		return GetValue(s_HeaderProperty);
	}

	void SettingsCard::Header(Windows::Foundation::IInspectable value)
	{
		SetValue(s_HeaderProperty, value);
	}

	DependencyProperty SettingsCard::HeaderProperty()
	{
		return s_HeaderProperty;
	}

	IInspectable SettingsCard::Description()
	{
		return GetValue(s_DescriptionProperty);
	}

	void SettingsCard::Description(Windows::Foundation::IInspectable value)
	{
		SetValue(s_DescriptionProperty, value);
	}

	DependencyProperty SettingsCard::DescriptionProperty()
	{
		return s_DescriptionProperty;
	}

	IconElement SettingsCard::HeaderIcon()
	{
		return GetValue(s_HeaderIconProperty).as<IconElement>();
	}

	void SettingsCard::HeaderIcon(Windows::Foundation::IInspectable value)
	{
		SetValue(s_HeaderIconProperty, value);
	}

	DependencyProperty SettingsCard::HeaderIconProperty()
	{
		return s_HeaderIconProperty;
	}

	IconElement SettingsCard::ActionIcon()
	{
		return GetValue(s_ActionIconProperty).as<IconElement>();
	}

	void SettingsCard::ActionIcon(Windows::Foundation::IInspectable value)
	{
		SetValue(s_ActionIconProperty, value);
	}

	DependencyProperty SettingsCard::ActionIconProperty()
	{
		return s_ActionIconProperty;
	}

	hstring SettingsCard::ActionIconToolTip()
	{
		return winrt::unbox_value<hstring>(GetValue(s_ActionIconToolTipProperty));
	}

	void SettingsCard::ActionIconToolTip(hstring value)
	{
		SetValue(s_ActionIconToolTipProperty, box_value(value));
	}

	DependencyProperty SettingsCard::ActionIconToolTipProperty()
	{
		return s_ActionIconToolTipProperty;
	}

	bool SettingsCard::IsClickEnabled()
	{
		return winrt::unbox_value<bool>(GetValue(s_IsClickEnabledProperty));
	}

	void SettingsCard::IsClickEnabled(bool value)
	{
		SetValue(s_IsClickEnabledProperty, box_value(value));
	}

	DependencyProperty SettingsCard::IsClickEnabledProperty()
	{
		return s_IsClickEnabledProperty;
	}

	bool SettingsCard::IsActionIconVisible()
	{
		return winrt::unbox_value<bool>(GetValue(s_IsActionIconVisibleProperty));
	}

	void SettingsCard::IsActionIconVisible(bool value)
	{
		SetValue(s_IsActionIconVisibleProperty, box_value(value));
	}

	DependencyProperty SettingsCard::IsActionIconVisibleProperty()
	{
		return s_IsActionIconVisibleProperty;
	}

	ContentAlignment SettingsCard::ContentAlignment()
	{
		return winrt::unbox_value<App6::ContentAlignment>(GetValue(s_ContentAlignmentProperty));
	}

	void SettingsCard::ContentAlignment(App6::ContentAlignment value)
	{
		SetValue(s_ContentAlignmentProperty, box_value(value));
	}

	DependencyProperty SettingsCard::ContentAlignmentProperty()
	{
		return s_ContentAlignmentProperty;
	}


	DependencyProperty SettingsCard::s_HeaderProperty =
		DependencyProperty::Register(
			L"Header",
			winrt::xaml_typename<IInspectable>(),
			winrt::xaml_typename<App6::SettingsCard>(),
			PropertyMetadata{nullptr});

	DependencyProperty SettingsCard::s_DescriptionProperty =
		DependencyProperty::Register(
			L"Description",
			winrt::xaml_typename<IInspectable>(),
			winrt::xaml_typename<App6::SettingsCard>(),
			PropertyMetadata{nullptr});

	DependencyProperty SettingsCard::s_HeaderIconProperty =
		DependencyProperty::Register(
			L"HeaderIcon",
			winrt::xaml_typename<IconElement>(),
			winrt::xaml_typename<App6::SettingsCard>(),
			PropertyMetadata{nullptr});

	DependencyProperty SettingsCard::s_ActionIconProperty =
		DependencyProperty::Register(
			L"ActionIcon",
			winrt::xaml_typename<IconElement>(),
			winrt::xaml_typename<App6::SettingsCard>(),
			PropertyMetadata{nullptr});

	DependencyProperty SettingsCard::s_ActionIconToolTipProperty =
		DependencyProperty::Register(
			L"ActionIconToolTip",
			winrt::xaml_typename<hstring>(),
			winrt::xaml_typename<App6::SettingsCard>(),
			PropertyMetadata{nullptr});

	DependencyProperty SettingsCard::s_IsClickEnabledProperty =
		DependencyProperty::Register(
			L"IsClickEnabled",
			winrt::xaml_typename<bool>(),
			winrt::xaml_typename<App6::SettingsCard>(),
			PropertyMetadata{box_value(false)});

	DependencyProperty SettingsCard::s_IsActionIconVisibleProperty =
		DependencyProperty::Register(
			L"IsActionIconVisible",
			winrt::xaml_typename<bool>(),
			winrt::xaml_typename<App6::SettingsCard>(),
			PropertyMetadata{box_value(false)});

	DependencyProperty SettingsCard::s_ContentAlignmentProperty =
		DependencyProperty::Register(
			L"ContentAlignment",
			winrt::xaml_typename<App6::ContentAlignment>(),
			winrt::xaml_typename<App6::SettingsCard>(),
			PropertyMetadata{box_value(ContentAlignment::Right)});
}
