#include "Lafwindowelementguardinstance.c"

#include "Nafproceduresubject.c"

void* BaseposeLafwindowelementguardinstance()
{
	static struct PoseinformateLafwindowelementguardinstance Informate_Value;

	Informate_Value = (static struct PoseinformateLafwindowelementguardinstance){0};

	struct PoseinformateLafwindowelementguardinstance* Informate_Valuepointer;

	Informate_Valuepointer = &Informate_Value;

	*Informate_Valuepointer = *((struct PoseLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement;

	Windowpose
	(
Informate_Valuepointer
	);

	((struct PoseLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement = Informate_Valuepointer;

	return (void*)WindowcorePointerElement;
}
