#include "Lafplatformelementguardinstance.c"

void* BaseinitializeLafplatformelementguardinstance()
{
	struct InitializeinformateLafplatformelementguardinstance Informate_Value;

	Informate_Value = *((struct InitializeLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement;

	BaseLafwindowelementguardinstance
	(
true
	);

	((struct InitializeLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement = (struct InitializeinformateLafwindowelementguardinstance*)&Informate_Value;

	((struct InitializeLafwindowelementguardinstance*)WindowcorePointerElement)->Initialize();

	((struct InitializeLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement = (struct InitializeinformateLafplatformelementguardinstance*)((struct InitializeLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement;

	return (void*)PlatformcorePointerElement;
}
