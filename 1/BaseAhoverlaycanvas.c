#include "Ahoverlaycanvas.c"

void BaseAhoverlaycanvas()
{
	WINBOOL Windowboolean_Temporal;

	HGDIOBJ Handlegraphicdeviceinterfaceobject_Value;

	Handlegraphicdeviceinterfaceobject_Value = SelectObject
	(
OverlaymemoryHandledevicecontextElement,
(HGDIOBJ)HandlebitmapElement
	);

	COLORREF Colorreference_Value;

	Colorreference_Value = RGB
	(
255,
0,
0
	);

	HBRUSH Handlebrush_Value;

	Handlebrush_Value = CreateSolidBrush
	(
Colorreference_Value
	);

	HPEN Handlepen_Value;
	    Handlepen_Value = CreatePen(PS_SOLID, 1, Colorreference_Value);

	RECT Rectangle_Value;

	Rectangle_Value = (RECT){0};

	Rectangle_Value.bottom = 300;

	Rectangle_Value.left = 200;

	Rectangle_Value.right = 300;

	Rectangle_Value.top = 200;

	const RECT* Rectangle_Constantvaluepointer;

	Rectangle_Constantvaluepointer = &Rectangle_Value;

    Windowboolean_Temporal = (WINBOOL)Ellipse
	(
MemoryHandledevicecontextElement,
Rectangle_Constantvaluepointer->left,
Rectangle_Constantvaluepointer->top,
Rectangle_Constantvaluepointer->right,
Rectangle_Constantvaluepointer->bottom
	);

	Windowboolean_Temporal = DeleteObject
	(
Handlebrush_Value
	);

	return;
}
