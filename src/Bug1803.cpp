#include "stdafx.h"
#include "MyForm.h"
#include "MyFormButton.h"
#include <Windows.h>

using namespace System;
using namespace Bug1803;

int main(array<System::String ^> ^args)
{
	MyForm form;
	form.WindowState = System::Windows::Forms::FormWindowState::Maximized;
	form.Show();

	MyFormButton formButton(%form);
	System::Windows::Forms::Application::Run(%formButton);

  return 0;
}
