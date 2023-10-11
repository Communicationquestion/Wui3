// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif



// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.
namespace winrt::xaml::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    } 
}


void winrt::xaml::implementation::MainWindow::Bold_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    if (fontsize().IsChecked()) {
        t1().FontSize(19);
    }
    else
    {
        t1().FontSize(15);
    }
}


void winrt::xaml::implementation::MainWindow::Italic_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    if (fontstyle().IsChecked()) {
        t1().FontStyle(winrt::Windows::UI::Text::FontStyle::Italic);
    }
    else {
        t1().FontStyle(winrt::Windows::UI::Text::FontStyle::Normal);
    }
    
}


void winrt::xaml::implementation::MainWindow::Increase_Font_Size_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{

}


void winrt::xaml::implementation::MainWindow::Decrease_Font_ize_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{

}
