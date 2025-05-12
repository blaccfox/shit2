#include "Lafwindowelementguardinstance.c"

#include "Nafproceduresubject.c"

void* BasemainLafwindowelementguardinstance()
{
	static struct MaininformateLafwindowelementguardinstance Informate_Value;

	Informate_Value = (static struct MaininformateLafwindowelementguardinstance){0};

	struct MaininformateLafwindowelementguardinstance* Informate_Valuepointer;

	Informate_Valuepointer = &Informate_Value;

	*Informate_Valuepointer = *((struct MainLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement;

	Windowmain
	(
Informate_Valuepointer
	);

	((struct MainLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement = Informate_Valuepointer;

	return (void*)WindowcorePointerElement;
}
