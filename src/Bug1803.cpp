#include "stdafx.h"
#include "MyForm.h"
#include <Windows.h>

using namespace System;
using namespace Bug1803;

int main(array<System::String ^> ^args)
{
	MyForm form;
	form.WindowState = System::Windows::Forms::FormWindowState::Maximized;
	System::Windows::Forms::Application::Run(%form);

  return 0;
}
