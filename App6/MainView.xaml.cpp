#include "pch.h"
#include "MainView.xaml.h"
#if __has_include("MainView.g.cpp")
#include "MainView.g.cpp"
#endif
#include <winrt/Windows.UI.Xaml.Interop.h>

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App6::implementation
{
	void MainView::NavView_ItemInvoked(const NavigationView& sender, const NavigationViewItemInvokedEventArgs& args)
	{
		auto item = args.InvokedItemContainer().as<NavigationViewItem>();
		if (auto headerText = item.Content().try_as<winrt::hstring>())
		{
			HeaderText().Text(to_hstring(*headerText));
		}
		if (args.IsSettingsInvoked())
		{
			contentFrame().Navigate(xaml_typename<SettingsPage>());
			return;
		}
		contentFrame().Navigate(xaml_typename<HomePage>());
		
	}

}
