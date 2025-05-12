#include "Lafplatformelementguardinstance.c"

void* BasemainLafplatformelementguardinstance()
{
	struct MaininformateLafplatformelementguardinstance Informate_Value;

	Informate_Value = *((struct MainLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement;

	BaseLafwindowelementguardinstance
	(
true
	);

	((struct MainLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement = (struct MaininformateLafwindowelementguardinstance*)&Informate_Value;

	((struct MainLafwindowelementguardinstance*)WindowcorePointerElement)->Main();

	((struct MainLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement = (struct MaininformateLafplatformelementguardinstance*)((struct MainLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement;

	return (void*)PlatformcorePointerElement;
}
