#include "Lafwindowelementguardinstance.c"

#include "Nafproceduresubject.c"

void* BaseallocateLafwindowelementguardinstance()
{
	static struct AllocateinformateLafwindowelementguardinstance Informate_Value;

	Informate_Value = (static struct AllocateinformateLafwindowelementguardinstance){0};

	struct AllocateinformateLafwindowelementguardinstance* Informate_Valuepointer;

	Informate_Valuepointer = &Informate_Value;

	*Informate_Valuepointer = *((struct AllocateLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement;

	Windowallocate
	(
Informate_Valuepointer
	);

	((struct AllocateLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement = Informate_Valuepointer;

	return (void*)WindowcorePointerElement;
}
