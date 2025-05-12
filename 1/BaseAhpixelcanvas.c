#include "Ahpixelcanvas.c"

struct Iafcanvaspixelguardpage* BaseAhpixelcanvas
(
struct Lafballelementguardinstance Ball_Valueargument
)
{
	struct Iafcanvaspixelguardpage* Pixel_Resultpointer = &(struct Iafcanvaspixelguardpage){0};

	struct Iafcanvaspixelguardpage* Pixel_Valuepointer;

	Pixel_Valuepointer = &(static struct Iafcanvaspixelguardpage){0};

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
		struct Iafcanvaspixelguardpage* Pixel_Cappointer;

		Pixel_Cappointer = CanvasdataPointerElement->SetPixelPointerPointer[integerCap];

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
			(float)Pixel_Cappointer->XIntegerElement
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
			(float)Pixel_Cappointer->YIntegerElement
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

		_Bool isEqualQuestyes;

		isEqualQuestyes = true;

		isEqualQuestyes = isEqualQuestyes
		&&
		(
			Ball_Valueargument.XIntegerfloatElement
			>=
			X_integerfloatCap
		)
==
true
;
		isEqualQuestyes = isEqualQuestyes
		&&
		(
			Ball_Valueargument.YIntegerfloatElement
			>=
			Y_integerfloatCount
		)
==
true
;
		isEqualQuestyes = isEqualQuestyes
		&&
		(
			Ball_Valueargument.XIntegerfloatElement
			<
			U_integerfloatSize
		)
==
true
;
		isEqualQuestyes = isEqualQuestyes
		&&
		(
			Ball_Valueargument.YIntegerfloatElement
			<
			V_integerfloatLength
		)
==
true
;

		if (isEqualQuestyes == true)
		{
			Pixel_Valuepointer = Pixel_Cappointer;

			break;
		}
else
false
;
		integerCap = integerCap + 1;

		continue;
	}
	while (true);

	Pixel_Resultpointer = Pixel_Valuepointer;

	return Pixel_Resultpointer;
}
