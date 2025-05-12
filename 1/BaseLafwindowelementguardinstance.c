#include "Lafwindowelementguardinstance.c"

struct Lafwindowelementguardinstance BaseLafwindowelementguardinstance
(
_Bool Staticshould_booleanValuequestargument
)
{
	struct Lafwindowelementguardinstance Instance_Result = (struct Lafwindowelementguardinstance){0};

	struct Lafwindowelementguardinstance* Instance_Valuepointer;

	Instance_Valuepointer = &(struct Lafwindowelementguardinstance){0};

	Instance_Valuepointer->Initialize = BaseinitializeLafwindowelementguardinstance;

	Instance_Valuepointer->Main = BasemainLafwindowelementguardinstance;

	Instance_Valuepointer->Finalize = BasefinalizeLafwindowelementguardinstance;

	Instance_Valuepointer->Allocate = BaseallocateLafwindowelementguardinstance;

	Instance_Valuepointer->Thread = BasethreadLafwindowelementguardinstance;

	Instance_Valuepointer->Spawn = BasespawnLafwindowelementguardinstance;

	Instance_Valuepointer->Pose = BaseposeLafwindowelementguardinstance;

	if (Staticshould_booleanValuequestargument == true)
	{
		WindowcorePointerElement = Instance_Valuepointer;
	}
else
false
;
	Instance_Result = *Instance_Valuepointer;

	return Instance_Result;
}
