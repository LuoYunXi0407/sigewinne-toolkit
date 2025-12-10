#pragma once
#include <microsoft.ui.xaml.window.h>
#include <winrt/Microsoft.UI.Interop.h>
#include <winrt/Microsoft.UI.Windowing.h>
#include <winrt/Windows.UI.Xaml.Interop.h>

#include "MainWindow.g.h"
#include "island.h"




using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;


namespace winrt::App6::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {   
    private:
        IslandEnvironment* penv;
    public:

        MainWindow()
        {
            
            initializeEnv();
			HWND hwnd{};
            auto windowNative = this->try_as<::IWindowNative>();
            windowNative->get_WindowHandle(&hwnd);
            auto windowId = winrt::Microsoft::UI::GetWindowIdFromWindow(hwnd);
            auto appWindow = winrt::Microsoft::UI::Windowing::AppWindow::GetFromWindowId(windowId);
            appWindow.Closing([&](auto&&, auto&&)
                {

                    //saveConfig();
				});

			this->ExtendsContentIntoTitleBar(true);
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

		void initializeEnv();
        void viewloaded(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
        
        void NavigationView_SelectionChanged(winrt::Microsoft::UI::Xaml::Controls::NavigationView const& sender, winrt::Microsoft::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs const& args);
    };
}

namespace winrt::App6::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
