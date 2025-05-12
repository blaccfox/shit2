#include "Lafplatformelementguardinstance.c"

void* BasefinalizeLafplatformelementguardinstance()
{
	struct FinalizeinformateLafplatformelementguardinstance Informate_Value;

	Informate_Value = *((struct FinalizeLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement;

	BaseLafwindowelementguardinstance
	(
true
	);

	((struct FinalizeLafplatformelementguardinstance*)WindowcorePointerElement)->InformatePointerElement = &Informate_Value;

	((struct FinalizeLafplatformelementguardinstance*)WindowcorePointerElement)->Finalize();

	((struct FinalizeLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement = (struct FinalizeinformateLafplatformelementguardinstance*)((struct FinalizeLafplatformelementguardinstance*)WindowcorePointerElement)->InformatePointerElement;

	return (void*)PlatformcorePointerElement;
}
