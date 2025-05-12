#include "Lafwindowelementguardinstance.c"

#include "Nafproceduresubject.c"

void* BasethreadLafwindowelementguardinstance()
{
	static struct ThreadinformateLafwindowelementguardinstance Informate_Value;

	Informate_Value = (static struct ThreadinformateLafwindowelementguardinstance){0};

	struct ThreadinformateLafwindowelementguardinstance* Informate_Valuepointer;

	Informate_Valuepointer = &Informate_Value;

	*Informate_Valuepointer = *((struct ThreadLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement;

	Windowthread
	(
Informate_Valuepointer
	);

	((struct ThreadLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement = Informate_Valuepointer;

	return (void*)WindowcorePointerElement;
}
