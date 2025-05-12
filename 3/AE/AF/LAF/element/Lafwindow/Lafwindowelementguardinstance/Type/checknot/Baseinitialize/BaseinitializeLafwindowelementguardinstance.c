#include "Lafwindowelementguardinstance.c"

#include "Nafproceduresubject.c"

void* BaseinitializeLafwindowelementguardinstance()
{
	static struct InitializeinformateLafwindowelementguardinstance Informate_Value;

	Informate_Value = (static struct InitializeinformateLafwindowelementguardinstance){0};

	struct InitializeinformateLafwindowelementguardinstance* Informate_Valuepointer;

	Informate_Valuepointer = &Informate_Value;

	*Informate_Valuepointer = *((struct InitializeLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement;

	Windowinitialize
	(
Informate_Valuepointer
	);

	((struct InitializeLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement = Informate_Valuepointer;

	return (void*)WindowcorePointerElement;
}
