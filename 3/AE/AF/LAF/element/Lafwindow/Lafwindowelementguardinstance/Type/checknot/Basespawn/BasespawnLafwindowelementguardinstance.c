#include "Lafwindowelementguardinstance.c"

#include "Nafproceduresubject.c"

void* BasespawnLafwindowelementguardinstance()
{
	static struct SpawninformateLafwindowelementguardinstance Informate_Value;

	Informate_Value = (static struct SpawninformateLafwindowelementguardinstance){0};

	struct SpawninformateLafwindowelementguardinstance* Informate_Valuepointer;

	Informate_Valuepointer = &Informate_Value;

	*Informate_Valuepointer = *((struct SpawnLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement;

	Windowspawn
	(
Informate_Valuepointer
	);

	((struct SpawnLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement = Informate_Valuepointer;

	return (void*)WindowcorePointerElement;
}
