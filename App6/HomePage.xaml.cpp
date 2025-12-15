#include "pch.h"
#include "LaunchGame.h"
#include "HomePage.xaml.h"
#if __has_include("HomePage.g.cpp")
#include "HomePage.g.cpp"
#endif
#include <winrt/Windows.UI.Xaml.Interop.h>
#include <winrt/Microsoft.UI.Xaml.Media.Animation.h>
#include "Settings.h"
#include <google/protobuf/util/json_util.h>

using namespace winrt;
using namespace winrt::Microsoft::UI::Xaml;
using namespace winrt::Windows::UI::Xaml::Interop;
using namespace winrt::Microsoft::UI::Xaml::Media::Animation;
using namespace Service::LaunchGame;
using namespace Service::Settings;
// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App6::implementation
{
	void HomePage::GamePath(hstring value)
	{
        g_settings.mutable_home()->set_gamepath(to_string(value));
	}

	hstring HomePage::GamePath()
	{
        return to_hstring(g_settings.mutable_home()->gamepath());
	}

	void HomePage::Button_KillProcess_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        TerminateProcess(GetCurrentProcess(), 0);
    }

    void HomePage::Button_Click_Game(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        g_path = Path().Text().c_str();
        Launch();
    }

    void HomePage::SelectorBar2_SelectionChanged(winrt::Microsoft::UI::Xaml::Controls::SelectorBar const& sender, winrt::Microsoft::UI::Xaml::Controls::SelectorBarSelectionChangedEventArgs const& args)
    {
        auto item = sender.SelectedItem();
        uint32_t currentSelectedIndex;
        sender.Items().IndexOf(item, currentSelectedIndex);
        SlideNavigationTransitionInfo slideInfo{};
        
        switch (currentSelectedIndex)
        {
        case 0:
            slideInfo.Effect(SlideNavigationTransitionEffect::FromRight);
            contentFrame().Navigate(xaml_typename<App6::LaunchGamePage>(), nullptr, slideInfo);
            break;
        case 1:
            slideInfo.Effect(SlideNavigationTransitionEffect::FromLeft);
            contentFrame().Navigate(xaml_typename<App6::IslandPage>(), nullptr, slideInfo);
            break;
        default:
            break;
        }

    }

}

