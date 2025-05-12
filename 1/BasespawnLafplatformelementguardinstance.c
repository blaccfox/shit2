#include "Lafplatformelementguardinstance.c"

void* BasespawnLafplatformelementguardinstance()
{
	struct SpawninformateLafplatformelementguardinstance Informate_Value;

	Informate_Value = *((struct SpawnLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement;

	BaseLafwindowelementguardinstance
	(
true
	);

	((struct SpawnLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement = (struct SpawninformateLafwindowelementguardinstance*)&Informate_Value;

	((struct SpawnLafwindowelementguardinstance*)WindowcorePointerElement)->Spawn();

	((struct SpawnLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement = (struct SpawninformateLafplatformelementguardinstance*)((struct SpawnLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement;

	return (void*)PlatformcorePointerElement;
}
