#include "Lafplatformelementguardinstance.c"

void* BaseallocateLafplatformelementguardinstance()
{
	struct AllocateinformateLafplatformelementguardinstance Informate_Value;

	Informate_Value = *((struct AllocateLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement;

	BaseLafwindowelementguardinstance
	(
true
	);

	((struct AllocateLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement = (struct AllocateinformateLafwindowelementguardinstance*)&Informate_Value;

	((struct AllocateLafwindowelementguardinstance*)WindowcorePointerElement)->Allocate();

	((struct AllocateLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement = (struct AllocateinformateLafplatformelementguardinstance*)((struct AllocateLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement;

	return (void*)PlatformcorePointerElement;
}
