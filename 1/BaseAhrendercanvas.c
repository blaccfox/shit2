#include "Ahrendercanvas.c"

void BaseAhrendercanvas()
{
	HGDIOBJ Handlegraphicdeviceinterfaceobject_Value;

	Handlegraphicdeviceinterfaceobject_Value = SelectObject
	(
MemoryHandledevicecontextElement,
(HGDIOBJ)HandlebitmapElement
	);

	WINBOOL Windowboolean_Temporal;

	int32_t integerCap;

	integerCap = 0;

	do
	{
		_Bool isEqualYes, shouldBreakYes;

		isEqualYes = (CanvasdataPointerElement->UniformIntegerElement == integerCap)
==
true
;
		shouldBreakYes = isEqualYes == true;

		if (shouldBreakYes == true)
		{
			break;
		}
else
false
;
		struct Iafcanvaspixelguardpage* Pixel_Valuepointer;

		Pixel_Valuepointer = CanvasdataPointerElement->SetPixelPointerPointer[integerCap];

		COLORREF Colorreference_Value;

		Colorreference_Value = RGB
		(
Pixel_Valuepointer->RedIntegerElement,
Pixel_Valuepointer->GreenIntegerElement,
Pixel_Valuepointer->BlueIntegerElement
		);

		HBRUSH Handlebrush_Value;

		Handlebrush_Value = CreateSolidBrush
		(
Colorreference_Value
		);

		float X_integerfloatCap, Y_integerfloatCount, U_integerfloatSize, V_integerfloatLength;

		X_integerfloatCap
		=
		(
			(
				(float)RectangleElement.right
				/
				(float)CanvasdataPointerElement->WidthIntegerElement
			)
			*
			(float)Pixel_Valuepointer->XIntegerElement
		);

		Y_integerfloatCount
		=
		(
			(
				(float)RectangleElement.bottom
				/
				(float)CanvasdataPointerElement->HeightIntegerElement
			)
			*
			(float)Pixel_Valuepointer->YIntegerElement
		);

		U_integerfloatSize
		=
		(
				X_integerfloatCap
				+
				(
					(float)RectangleElement.right
					/
					(float)CanvasdataPointerElement->WidthIntegerElement
				)
		);

		V_integerfloatLength
		=
		(
				Y_integerfloatCount
				+
				(
					(float)RectangleElement.bottom
					/
					(float)CanvasdataPointerElement->HeightIntegerElement
				)
		);

		RECT Rectangle_Value;

		Rectangle_Value = (RECT){0};

		Rectangle_Value.bottom = (int32_t)V_integerfloatLength;

		Rectangle_Value.left = (int32_t)X_integerfloatCap;

		Rectangle_Value.right = (int32_t)U_integerfloatSize;

		Rectangle_Value.top = (int32_t)Y_integerfloatCount;

		const RECT* Rectangle_Constantvaluepointer;

		Rectangle_Constantvaluepointer = &Rectangle_Value;

	    Windowboolean_Temporal = (WINBOOL)FillRect
		(
MemoryHandledevicecontextElement,
Rectangle_Constantvaluepointer,
Handlebrush_Value
		);

		Windowboolean_Temporal = DeleteObject
		(
Handlebrush_Value
		);

		integerCap = integerCap + 1;

		continue;
	}
	while (true);

	return;
}
