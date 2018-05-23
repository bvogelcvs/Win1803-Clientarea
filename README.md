# Win1803-Clientarea

Demonstration project for showing a bug in Windows 10 1803 (Build 17134.1).
Opening a Windows Form in WindowState maximize and restoring it causes the left and top border to be transparent
when the Form is a clientarea-only form. Clientarea only is done by returning 0 for WM_NCCALCSIZE where WPARAM is true.

To reproduce the issue run the project and double-click or drag the form around.
There should be a 10px wide border around the whole form but the left and top border has a 8px transparent area.
This area belongs to the form but its not possible to draw inside.
