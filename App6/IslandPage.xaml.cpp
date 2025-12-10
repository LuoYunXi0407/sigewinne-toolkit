#include "pch.h"
#include "IslandPage.xaml.h"
#if __has_include("IslandPage.g.cpp")
#include "IslandPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;
// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App6::implementation
{

    void IslandPage::loadConfig()
    {

    }

    void IslandPage::saveConfig()
    {

    }

    void IslandPage::Button_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        exit(0);
    }

    void IslandPage::Button_Click_Game(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        //auto str = winrt::to_string(Path().Text());
        //launchGame((char*)str.c_str());

    }

    void IslandPage::TargetFovHotSwitch(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->EnableSetFieldOfView = sender.try_as<ToggleSwitch>().IsOn();
    }

    void IslandPage::DisableFog(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->DisableFog = sender.try_as<ToggleSwitch>().IsOn();
    }

    void IslandPage::TargetFpsToggleSwitch(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->EnableSetTargetFrameRate = sender.try_as<ToggleSwitch>().IsOn();
    }

    void IslandPage::TargetFps(winrt::Microsoft::UI::Xaml::Controls::NumberBox const& sender, winrt::Microsoft::UI::Xaml::Controls::NumberBoxValueChangedEventArgs const& args)
    {
        penv->TargetFrameRate = sender.Value();
    }

    void IslandPage::TargetFov(winrt::Microsoft::UI::Xaml::Controls::NumberBox const& sender, winrt::Microsoft::UI::Xaml::Controls::NumberBoxValueChangedEventArgs const& args)
    {
        penv->FieldOfView = sender.Value();
    }

    void IslandPage::FixLowFovSceneToggleSwitch(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->FixLowFovScene = sender.try_as<ToggleSwitch>().IsOn();

    }


    void IslandPage::RemoveOpenTeamProgress(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->RemoveOpenTeamProgress = sender.try_as<ToggleSwitch>().IsOn();
    }

    void IslandPage::EventCameraMoveHotSwitch(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->DisableEventCameraMove = sender.try_as<ToggleSwitch>().IsOn();
    }

    void IslandPage::DisableShowDamageText(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->DisableShowDamageText = sender.try_as<ToggleSwitch>().IsOn();
    }

    void IslandPage::RedirectCombineEntryToggleSwitch(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->RedirectCombineEntry = sender.try_as<ToggleSwitch>().IsOn();
    }

    void IslandPage::UsingTouchScreen(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->UsingTouchScreen = sender.try_as<ToggleSwitch>().IsOn();
    }

    void IslandPage::ResinListItemAllowOriginalResin(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->ResinListItemId000106Allowed = sender.try_as<ToggleSwitch>().IsOn();
    }

    void IslandPage::ResinListItemAllowPrimogem(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->ResinListItemId000201Allowed = sender.try_as<ToggleSwitch>().IsOn();
    }

    void IslandPage::ResinListItemAllowFragileResin(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->ResinListItemId107009Allowed = sender.try_as<ToggleSwitch>().IsOn();
    }


    void IslandPage::ResinListItemAllowTransientResin(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->ResinListItemId107012Allowed = sender.try_as<ToggleSwitch>().IsOn();
    }

    void IslandPage::ResinListItemAllowCondensedResin(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->ResinListItemId220007Allowed = sender.try_as<ToggleSwitch>().IsOn();
    }

    void IslandPage::HideQuestBanner(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->HideQuestBanner = sender.try_as<ToggleSwitch>().IsOn();
    }

}
