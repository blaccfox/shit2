#include "Ahconfigurecanvas.c"

void BaseAhconfigurecanvas
(
int32_t Width___integeritemargument___ITEMARGUMENT,
int32_t Height___integerentryargument___ENTRYARGUMENT
)
{
	int32_t integerValue;

	integerValue = 0;

	integerValue = integerValue + 1;

	integerValue = integerValue * Width___integeritemargument___ITEMARGUMENT;

	integerValue = integerValue * Height___integerentryargument___ENTRYARGUMENT;

	size_t Sizetype_Value;

	Sizetype_Value = 0;

	Sizetype_Value = Sizetype_Value + 1;

	Sizetype_Value = Sizetype_Value * sizeof(struct Iafcanvaspixelguardpage*);

	Sizetype_Value = Sizetype_Value * integerValue;

	BaseLafplatformelementguardinstance
	(
true
	);

	PlatformtemporalVoidpointerElement = (void*)PlatformcorePointerElement;

	PlatformtemporaryVoidpointerElement = (void*)&(struct AllocateinformateLafplatformelementguardinstance){0};

	((struct AllocateinformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement)->SizetypeElement = (SIZE_T)Sizetype_Value;

	((struct AllocateLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->InformatePointerElement = (struct AllocateinformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement;

	((struct AllocateLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->Allocate();

	struct Iafcanvaspixelguardpage** Pixel_Valuepointerpointer;

	Pixel_Valuepointerpointer = (struct Iafcanvaspixelguardpage**)((struct AllocateLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement->ResultLongpointervoidElement;

	CanvasdataPointerElement->WidthIntegerElement = Width___integeritemargument___ITEMARGUMENT;

	CanvasdataPointerElement->HeightIntegerElement = Height___integerentryargument___ENTRYARGUMENT;

	CanvasdataPointerElement->UniformIntegerElement = integerValue;

	CanvasdataPointerElement->SetPixelPointerPointer = Pixel_Valuepointerpointer;

	return;
}
