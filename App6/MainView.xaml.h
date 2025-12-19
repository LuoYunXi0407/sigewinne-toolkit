#pragma once

#include "MainView.g.h"
#include <winrt/Windows.UI.Xaml.Interop.h>

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;

namespace winrt::App6::implementation
{
    struct MainView : MainViewT<MainView>
    {
        MainView()
        {
            DispatcherQueue().TryEnqueue(
                [this]()
                {
					NavView().SelectedItem(NavView().MenuItems().GetAt(0));

                });
	        // Xaml objects should not call InitializeComponent during construction.
	        // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        void NavView_SelectionChanged(winrt::Microsoft::UI::Xaml::Controls::NavigationView const& sender, winrt::Microsoft::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs const& args);
    };
}

namespace winrt::App6::factory_implementation
{
    struct MainView : MainViewT<MainView, implementation::MainView>
    {
    };
}
