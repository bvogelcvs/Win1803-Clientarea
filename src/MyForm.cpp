#include "stdafx.h"
#include "MyForm.h"
#include <windows.h>

namespace Bug1803 {
	void MyForm::WndProc(System::Windows::Forms::Message% message) {
		if (message.Msg == WM_NCCALCSIZE) {
			if (message.WParam == System::IntPtr(1)) {
				message.Result = System::IntPtr::Zero;
			}
		} else {
			__super::WndProc(message);
		}
	}

	void MyForm::OnPaint(PaintEventArgs^ paintEventArgs) {
		paintEventArgs->Graphics->FillRectangle(Brushes::Blue, Rectangle::Inflate(ClientRectangle, -10, -10));
	}

	void MyForm::OnSizeChanged(System::EventArgs^ eventArgs)
	{
		this->Invalidate();
		__super::OnSizeChanged(eventArgs);
	}
}
