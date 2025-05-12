#include "Lafwindowelementguardinstance.c"

#include "Nafproceduresubject.c"

void* BasefinalizeLafwindowelementguardinstance()
{
	static struct FinalizeinformateLafwindowelementguardinstance Informate_Value;

	Informate_Value = (static struct FinalizeinformateLafwindowelementguardinstance){0};

	struct FinalizeinformateLafwindowelementguardinstance* Informate_Valuepointer;

	Informate_Valuepointer = &Informate_Value;

	*Informate_Valuepointer = *((struct FinalizeLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement;

	Windowfinalize
	(
Informate_Valuepointer
	);

	((struct FinalizeLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement = Informate_Valuepointer;

	return (void*)WindowcorePointerElement;
}
