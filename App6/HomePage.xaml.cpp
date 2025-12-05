#include "pch.h"
#include "HomePage.xaml.h"
#if __has_include("HomePage.g.cpp")
#include "HomePage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;
// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App6::implementation
{

    void HomePage::loadConfig()
    {
        pConfig pconfig = new Config();
        ZeroMemory(pconfig, sizeof(Config));
        auto h = CreateFile(L"config", GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
        if (h == INVALID_HANDLE_VALUE) {
            return;
        }
        LPVOID ptr = nullptr;
        ReadFile(h, pconfig, sizeof(Config), NULL, NULL);
        Path().Text(winrt::to_hstring(pconfig->gamePath));
        TargetFps_NumberBox().Value(pconfig->TargetFrameRate);
        TargetFov_NumberBox().Value(pconfig->FieldOfView);
        TargetFovHotSwitch_Toggle().IsOn(pconfig->EnableSetFieldOfView);
        DisableFog_Toggle().IsOn(pconfig->DisableFog);
        DisableShowDamageText_Toggle().IsOn(pconfig->DisableShowDamageText);
        TargetFpsToggleSwitch_Toggle().IsOn(pconfig->EnableSetTargetFrameRate);
        FixLowFovSceneToggleSwitch_Toggle().IsOn(pconfig->FixLowFovScene);
        RemoveOpenTeamProgress_Toggle().IsOn(pconfig->RemoveOpenTeamProgress);
        EventCameraMoveHotSwitch_Toggle().IsOn(pconfig->DisableEventCameraMove);
        RedirectCombineEntryToggleSwitch_Toggle().IsOn(pconfig->RedirectCombineEntry);
        HideQuestBanner_Toggle().IsOn(pconfig->HideQuestBanner);
        UsingTouchScreen_Toggle().IsOn(pconfig->UsingTouchScreen);
        ResinListItemAllowOriginalResin_Toggle().IsOn(pconfig->ResinListItemId000106Allowed);
        ResinListItemAllowPrimogem_Toggle().IsOn(pconfig->ResinListItemId000201Allowed);
        ResinListItemAllowFragileResin_Toggle().IsOn(pconfig->ResinListItemId107009Allowed);
        ResinListItemAllowTransientResin_Toggle().IsOn(pconfig->ResinListItemId107012Allowed);
        ResinListItemAllowCondensedResin_Toggle().IsOn(pconfig->ResinListItemId220007Allowed);

        CloseHandle(h);
        delete pconfig;
    }

    void HomePage::saveConfig()
    {

        pConfig pconfig = new Config();
        ZeroMemory(pconfig, sizeof(Config));
        auto h = CreateFile(L"config", GENERIC_READ | GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
        if (h == INVALID_HANDLE_VALUE) {
            return;
        }
        LPVOID ptr = nullptr;

        auto str = winrt::to_string(Path().Text());
        strcpy_s(pconfig->gamePath, str.c_str());
        pconfig->DisableEventCameraMove = penv->DisableEventCameraMove;;
        pconfig->DisableFog = penv->DisableFog;
        pconfig->DisableShowDamageText = penv->DisableShowDamageText;
        pconfig->EnableSetFieldOfView = penv->EnableSetFieldOfView;
        pconfig->EnableSetTargetFrameRate = penv->EnableSetTargetFrameRate;
        pconfig->FieldOfView = penv->FieldOfView;
        pconfig->FixLowFovScene = penv->FixLowFovScene;
        pconfig->HideQuestBanner = penv->HideQuestBanner;
        pconfig->RemoveOpenTeamProgress = penv->RemoveOpenTeamProgress;
        pconfig->RedirectCombineEntry = penv->RedirectCombineEntry;
        pconfig->UsingTouchScreen = penv->UsingTouchScreen;
        pconfig->TargetFrameRate = penv->TargetFrameRate;
        pconfig->ResinListItemId000106Allowed = penv->ResinListItemId000106Allowed;
        pconfig->ResinListItemId000201Allowed = penv->ResinListItemId000201Allowed;
        pconfig->ResinListItemId107009Allowed = penv->ResinListItemId107009Allowed;
        pconfig->ResinListItemId107012Allowed = penv->ResinListItemId107012Allowed;
        pconfig->ResinListItemId220007Allowed = penv->ResinListItemId220007Allowed;

        WriteFile(h, pconfig, sizeof(Config), NULL, NULL);
        CloseHandle(h);
        delete pconfig;
    }

    void HomePage::Button_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        exit(0);
    }

    void HomePage::Button_Click_Game(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        auto str = winrt::to_string(Path().Text());
        launchGame((char*)str.c_str());

    }

    void HomePage::TargetFovHotSwitch(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->EnableSetFieldOfView = sender.try_as<ToggleSwitch>().IsOn();
    }

    void HomePage::DisableFog(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->DisableFog = sender.try_as<ToggleSwitch>().IsOn();
    }

    void HomePage::TargetFpsToggleSwitch(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->EnableSetTargetFrameRate = sender.try_as<ToggleSwitch>().IsOn();
    }

    void HomePage::TargetFps(winrt::Microsoft::UI::Xaml::Controls::NumberBox const& sender, winrt::Microsoft::UI::Xaml::Controls::NumberBoxValueChangedEventArgs const& args)
    {
        penv->TargetFrameRate = sender.Value();
    }

    void HomePage::TargetFov(winrt::Microsoft::UI::Xaml::Controls::NumberBox const& sender, winrt::Microsoft::UI::Xaml::Controls::NumberBoxValueChangedEventArgs const& args)
    {
        penv->FieldOfView = sender.Value();
    }

    void HomePage::FixLowFovSceneToggleSwitch(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->FixLowFovScene = sender.try_as<ToggleSwitch>().IsOn();

    }


    void HomePage::RemoveOpenTeamProgress(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->RemoveOpenTeamProgress = sender.try_as<ToggleSwitch>().IsOn();
    }

    void HomePage::EventCameraMoveHotSwitch(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->DisableEventCameraMove = sender.try_as<ToggleSwitch>().IsOn();
    }

    void HomePage::DisableShowDamageText(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->DisableShowDamageText = sender.try_as<ToggleSwitch>().IsOn();
    }

    void HomePage::RedirectCombineEntryToggleSwitch(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->RedirectCombineEntry = sender.try_as<ToggleSwitch>().IsOn();
    }

    void HomePage::UsingTouchScreen(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->UsingTouchScreen = sender.try_as<ToggleSwitch>().IsOn();
    }

    void HomePage::ResinListItemAllowOriginalResin(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->ResinListItemId000106Allowed = sender.try_as<ToggleSwitch>().IsOn();
    }

    void HomePage::ResinListItemAllowPrimogem(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->ResinListItemId000201Allowed = sender.try_as<ToggleSwitch>().IsOn();
    }

    void HomePage::ResinListItemAllowFragileResin(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->ResinListItemId107009Allowed = sender.try_as<ToggleSwitch>().IsOn();
    }


    void HomePage::ResinListItemAllowTransientResin(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->ResinListItemId107012Allowed = sender.try_as<ToggleSwitch>().IsOn();
    }

    void HomePage::ResinListItemAllowCondensedResin(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->ResinListItemId220007Allowed = sender.try_as<ToggleSwitch>().IsOn();
    }

    void HomePage::HideQuestBanner(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        penv->HideQuestBanner = sender.try_as<ToggleSwitch>().IsOn();
    }

}
