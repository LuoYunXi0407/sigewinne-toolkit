#include "pch.h"
#include "StyleExtensions.h"
#if __has_include("StyleExtensions.g.cpp")
#include "StyleExtensions.g.cpp"
#endif


#include <winrt/Windows.UI.Xaml.Interop.h>


using namespace winrt;
using namespace Microsoft::UI::Xaml;

namespace winrt::App6::implementation
{

    DependencyProperty StyleExtensions::s_ResourcesProperty =
        DependencyProperty::RegisterAttached(
            L"Resources",
            winrt::xaml_typename<ResourceDictionary>(),
            winrt::xaml_typename<App6::StyleExtensions>(),
            PropertyMetadata{
            	nullptr,
                [](DependencyObject sender, DependencyPropertyChangedEventArgs e)
                {
                    auto frameworkElement = sender.try_as<winrt::Windows::UI::Xaml::FrameworkElement>();
                    if (!frameworkElement)
                    {
                        return;
                    }
                    
                    auto mergedDictionaries = frameworkElement.Resources().MergedDictionaries();
                    if (!mergedDictionaries)
                    {
                        return;
                    }
                    
                    // 移除已存在的 StyleExtensionResourceDictionary
                    
					
                    
 
                    					
                }
                    
            });



    DependencyProperty StyleExtensions::ResourcesProperty()
    {
		return s_ResourcesProperty;
    }

    Microsoft::UI::Xaml::ResourceDictionary StyleExtensions::GetResources(Microsoft::UI::Xaml::Style const& obj)
    {
        return obj.GetValue(ResourcesProperty()).as<ResourceDictionary>();
    }

    void StyleExtensions::SetResources(Microsoft::UI::Xaml::Style const& obj,
	    Microsoft::UI::Xaml::ResourceDictionary const& value)
    {
        obj.SetValue(ResourcesProperty(), value);
    }


}
