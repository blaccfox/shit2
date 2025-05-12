#include "Ahpopulatecanvas.c"

void BaseAhpopulatecanvas()
{
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
		int32_t X_integerItem, Y_integerEntry;

		X_integerItem
		=
		(
			integerCap
			-
			(
				(int32_t)trunc
				(
					integerCap
					/
					CanvasdataPointerElement->WidthIntegerElement
				)
				*
				CanvasdataPointerElement->WidthIntegerElement
			)
		);

		Y_integerEntry = 0;

		Y_integerEntry = Y_integerEntry + 1;

		Y_integerEntry = Y_integerEntry * integerCap;

		Y_integerEntry = Y_integerEntry / CanvasdataPointerElement->WidthIntegerElement;

		struct Lafcolorelementpage Color_Value;

		Color_Value = BaseAhrandomcolor();

		struct Iafcanvaspixelguardpage Pixel_Value;

		Pixel_Value = (struct Iafcanvaspixelguardpage){0};

		Pixel_Value.XIntegerElement = X_integerItem;

		Pixel_Value.YIntegerElement = Y_integerEntry;

		Pixel_Value.RedIntegerElement = Color_Value.RedIntegerElement;

		Pixel_Value.GreenIntegerElement = Color_Value.GreenIntegerElement;

		Pixel_Value.BlueIntegerElement = Color_Value.BlueIntegerElement;

		size_t Sizetype_Value;

		Sizetype_Value
		=
		(
			sizeof(struct Iafcanvaspixelguardpage)
			*
			1
		);

		BaseLafplatformelementguardinstance
		(
true
		);

		PlatformtemporalVoidpointerElement = (void*)PlatformcorePointerElement;

		PlatformtemporaryVoidpointerElement = (void*)&(struct AllocateinformateLafplatformelementguardinstance){0};

		((struct AllocateinformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement)->SizetypeElement = (SIZE_T)Sizetype_Value;

		((struct AllocateLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->InformatePointerElement = (struct AllocateinformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement;

		((struct AllocateLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->Allocate();

		struct Iafcanvaspixelguardpage* Pixel_Valuepointer;

		Pixel_Valuepointer = (struct Iafcanvaspixelguardpage*)((struct AllocateLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement->ResultLongpointervoidElement;

		*Pixel_Valuepointer = Pixel_Value;

 		CanvasdataPointerElement->SetPixelPointerPointer[integerCap] = Pixel_Valuepointer;

		integerCap = integerCap + 1;

		continue;
	}
	while (true);

	return;
}
