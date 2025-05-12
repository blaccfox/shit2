#include "Ahinvalidatecanvas.c"

void BaseAhinvalidatecanvas()
{
	WINBOOL Windowboolean_Temporal;

	const RECT* Rectangle_Constantvaluepointer;

	Rectangle_Constantvaluepointer = &RectangleElement;

	Windowboolean_Temporal = InvalidateRect
	(
HandleElement,
Rectangle_Constantvaluepointer,
false
	);

	Windowboolean_Temporal = UpdateWindow
	(
HandleElement
	);

	return;
}
