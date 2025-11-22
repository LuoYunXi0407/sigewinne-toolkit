#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App6::implementation
{
    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}

void winrt::App6::implementation::MainWindow::Button_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    exit(0);
}

void winrt::App6::implementation::MainWindow::BackgroundColor_SelectionChanged(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Controls::SelectionChangedEventArgs const& e)
{

}

void winrt::App6::implementation::MainWindow::ColorListBox_SelectionChanged(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Controls::SelectionChangedEventArgs const& e)
{

}

void winrt::App6::implementation::MainWindow::NavigationView_SelectionChanged5(winrt::Microsoft::UI::Xaml::Controls::NavigationView const& sender, winrt::Microsoft::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs const& args)
{

}

void winrt::App6::implementation::MainWindow::NavigationView_SelectionChanged(winrt::Microsoft::UI::Xaml::Controls::NavigationView const& sender, winrt::Microsoft::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs const& args)
{

}



void winrt::App6::implementation::MainWindow::Button_Click_Game(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    auto str = winrt::to_string(Path().Text());
    launchGame((char*)str.c_str());

}

void winrt::App6::implementation::MainWindow::TargetFovHotSwitch(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    penv->EnableSetFieldOfView = !penv->EnableSetFieldOfView;
}

void winrt::App6::implementation::MainWindow::DisableFog(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    penv->DisableFog = !penv->DisableFog;
}

void winrt::App6::implementation::MainWindow::TargetFpsToggleSwitch(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    penv->EnableSetTargetFrameRate = !penv->EnableSetTargetFrameRate;
}

void winrt::App6::implementation::MainWindow::TargetFps(winrt::Microsoft::UI::Xaml::Controls::NumberBox const& sender, winrt::Microsoft::UI::Xaml::Controls::NumberBoxValueChangedEventArgs const& args)
{
    penv->TargetFrameRate = sender.Value();
}

void winrt::App6::implementation::MainWindow::TargetFov(winrt::Microsoft::UI::Xaml::Controls::NumberBox const& sender, winrt::Microsoft::UI::Xaml::Controls::NumberBoxValueChangedEventArgs const& args)
{
    penv->FieldOfView = sender.Value();
}

void winrt::App6::implementation::MainWindow::FixLowFovSceneToggleSwitch(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    penv->FixLowFovScene = !penv->FixLowFovScene;

}


void winrt::App6::implementation::MainWindow::RemoveOpenTeamProgress(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    penv->RemoveOpenTeamProgress = !penv->RemoveOpenTeamProgress;
}

void winrt::App6::implementation::MainWindow::EventCameraMoveHotSwitch(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    penv->DisableEventCameraMove = !penv->DisableEventCameraMove;
}

void winrt::App6::implementation::MainWindow::DisableShowDamageText(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    penv->DisableShowDamageText = !penv->DisableShowDamageText;
}

void winrt::App6::implementation::MainWindow::RedirectCombineEntryToggleSwitch(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    penv->RedirectCombineEntry = !penv->RedirectCombineEntry;
}

void winrt::App6::implementation::MainWindow::UsingTouchScreen(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    penv->UsingTouchScreen = !penv->UsingTouchScreen;
}

void winrt::App6::implementation::MainWindow::ResinListItemAllowOriginalResin(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    penv->ResinListItemId000106Allowed = !penv->ResinListItemId000106Allowed;
}

void winrt::App6::implementation::MainWindow::ResinListItemAllowPrimogem(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    penv->ResinListItemId000201Allowed = !penv->ResinListItemId000201Allowed;
}

void winrt::App6::implementation::MainWindow::ResinListItemAllowFragileResin(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    penv->ResinListItemId107009Allowed = !penv->ResinListItemId107009Allowed;
}


void winrt::App6::implementation::MainWindow::ResinListItemAllowTransientResin(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    penv->ResinListItemId107012Allowed = !penv->ResinListItemId107012Allowed;
}

void winrt::App6::implementation::MainWindow::ResinListItemAllowCondensedResin(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    penv->ResinListItemId220007Allowed = !penv->ResinListItemId220007Allowed;
}

void winrt::App6::implementation::MainWindow::HideQuestBanner(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    penv->HideQuestBanner = !penv->HideQuestBanner;
}

void winrt::App6::implementation::MainWindow::loadConfig()
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
    penv->FieldOfView = pconfig->FieldOfView;
    penv->TargetFrameRate = pconfig->TargetFrameRate;
    penv->EnableSetFieldOfView = pconfig->EnableSetFieldOfView;
    penv->FixLowFovScene = pconfig->FixLowFovScene;
    penv->DisableFog = pconfig->DisableFog;
    penv->EnableSetTargetFrameRate = pconfig->EnableSetTargetFrameRate;
    penv->RemoveOpenTeamProgress = pconfig->RemoveOpenTeamProgress;
    penv->HideQuestBanner = pconfig->HideQuestBanner;
    penv->DisableEventCameraMove = pconfig->DisableEventCameraMove;
    penv->DisableShowDamageText = pconfig->DisableShowDamageText;
    penv->UsingTouchScreen = pconfig->UsingTouchScreen;
    penv->RedirectCombineEntry = pconfig->RedirectCombineEntry;
    penv->ResinListItemId000106Allowed = pconfig->ResinListItemId000106Allowed;
    penv->ResinListItemId000201Allowed = pconfig->ResinListItemId000201Allowed;
    penv->ResinListItemId107009Allowed = pconfig->ResinListItemId107009Allowed;
    penv->ResinListItemId107012Allowed = pconfig->ResinListItemId107012Allowed;
    penv->ResinListItemId220007Allowed = pconfig->ResinListItemId220007Allowed;
    

    CloseHandle(h);
    delete pconfig;
}

void winrt::App6::implementation::MainWindow::saveConfig()
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



void winrt::App6::implementation::MainWindow::viewloaded(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{

    penv->IslandFunctionOffsets.MickeyWonderMethod = 97683856;
    penv->IslandFunctionOffsets.MickeyWonderMethodPartner = 4054192;
    penv->IslandFunctionOffsets.MickeyWonderMethodPartner2 = 186683024;
    penv->IslandFunctionOffsets.SetFieldOfView = 16938096;
    penv->IslandFunctionOffsets.SetEnableFogRendering = 349320976;
    penv->IslandFunctionOffsets.SetTargetFrameRate = 349239824;
    penv->IslandFunctionOffsets.OpenTeam = 260760016;
    penv->IslandFunctionOffsets.OpenTeamPageAccordingly = 260940064;
    penv->IslandFunctionOffsets.CheckCanEnter = 206502784;
    penv->IslandFunctionOffsets.SetupQuestBanner = 220247008;
    penv->IslandFunctionOffsets.FindGameObject = 349252176;
    penv->IslandFunctionOffsets.SetActive = 349251472;
    penv->IslandFunctionOffsets.EventCameraMove = 109003424;
    penv->IslandFunctionOffsets.ShowOneDamageTextEx = 265242752;
    penv->IslandFunctionOffsets.SwitchInputDeviceToTouchScreen = 208642176;
    penv->IslandFunctionOffsets.MickeyWonderCombineEntryMethod = 256735408;
    penv->IslandFunctionOffsets.MickeyWonderCombineEntryMethodPartner = 111928560;
    penv->IslandFunctionOffsets.GetTargetFrameRate = 19127664;
    penv->IslandFunctionOffsets.GameManagerAwake = 204333664;
    penv->IslandFunctionOffsets.SetupResinList = 109454912;
    penv->IslandFunctionOffsets.ResinListRemove = 0x13CDA8C0;
    penv->IslandFunctionOffsets.ResinList = 0x1F0;
    penv->IslandFunctionOffsets.ResinListGetItem = 0x13CD8FF0;
    penv->IslandFunctionOffsets.ResinListGetCount = 0x13CD8F90;
    penv->IslandFunctionOffsets.SetLastUid = 0x0F43BA90;
    penv->TargetFrameRate = 120;
    penv->FieldOfView = 45;

    penv->ResinListItemId000201Allowed = 1;
    penv->ResinListItemId000106Allowed = 1;
    penv->ResinListItemId107009Allowed = 1;
    penv->ResinListItemId220007Allowed = 1;
    penv->ResinListItemId107012Allowed = 1;
	loadConfig();
}
