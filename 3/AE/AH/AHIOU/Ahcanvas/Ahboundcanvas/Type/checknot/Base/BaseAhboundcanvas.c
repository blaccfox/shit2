#include "Ahboundcanvas.c"

void BaseAhboundcanvas()
{
	WINBOOL Windowboolean_Temporal;

	RECT Rectangle_Value;

	Rectangle_Value = (RECT){0};

	const RECT* Rectangle_Constantvaluepointer;

	Rectangle_Constantvaluepointer = &Rectangle_Value;

	Windowboolean_Temporal = GetClientRect
	(
HandleElement,
Rectangle_Constantvaluepointer
	);

	RectangleElement = Rectangle_Value;

	return;
}
