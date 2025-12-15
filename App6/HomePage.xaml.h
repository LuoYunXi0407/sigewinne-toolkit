#pragma once

#include "HomePage.g.h"

namespace winrt::App6::implementation
{
    struct HomePage : HomePageT<HomePage>
    {
        HomePage()
        {
            this->NavigationCacheMode(Microsoft::UI::Xaml::Navigation::NavigationCacheMode::Required);
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }
        void GamePath(hstring value);
		hstring GamePath();
        void Button_KillProcess_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
        void Button_Click_Game(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
        void SelectorBar2_SelectionChanged(winrt::Microsoft::UI::Xaml::Controls::SelectorBar const& sender, winrt::Microsoft::UI::Xaml::Controls::SelectorBarSelectionChangedEventArgs const& args);
    };
}

namespace winrt::App6::factory_implementation
{
    struct HomePage : HomePageT<HomePage, implementation::HomePage>
    {
    };
}
