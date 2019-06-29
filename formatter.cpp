#include "pch.h"
#include "MainWindow.h"


using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	formatter::MainWindow mainWindow;
	Application::Run(%mainWindow);
	
    return 0;
}
