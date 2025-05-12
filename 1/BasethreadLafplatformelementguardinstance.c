#include "Lafplatformelementguardinstance.c"

void* BasethreadLafplatformelementguardinstance()
{
	struct ThreadinformateLafplatformelementguardinstance Informate_Value;

	Informate_Value = *((struct ThreadLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement;

	BaseLafwindowelementguardinstance
	(
true
	);

	((struct ThreadLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement = (struct ThreadinformateLafwindowelementguardinstance*)&Informate_Value;

	((struct ThreadLafwindowelementguardinstance*)WindowcorePointerElement)->Thread();

	((struct ThreadLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement = (struct ThreadinformateLafplatformelementguardinstance*)((struct ThreadLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement;

	return (void*)PlatformcorePointerElement;
}
