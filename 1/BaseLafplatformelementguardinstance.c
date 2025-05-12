#include "Lafplatformelementguardinstance.c"

struct Lafplatformelementguardinstance BaseLafplatformelementguardinstance
(
_Bool Staticshould_booleanValuequestargument
)
{
	struct Lafplatformelementguardinstance Instance_Result = (struct Lafplatformelementguardinstance){0};

	struct Lafplatformelementguardinstance* Instance_Valuepointer;

	Instance_Valuepointer = &(struct Lafplatformelementguardinstance){0};

	Instance_Valuepointer->Initialize = BaseinitializeLafplatformelementguardinstance;

	Instance_Valuepointer->Main = BasemainLafplatformelementguardinstance;

	Instance_Valuepointer->Finalize = BasefinalizeLafplatformelementguardinstance;

	Instance_Valuepointer->Allocate = BaseallocateLafplatformelementguardinstance;

	Instance_Valuepointer->Thread = BasethreadLafplatformelementguardinstance;

	Instance_Valuepointer->Spawn = BasespawnLafplatformelementguardinstance;

	Instance_Valuepointer->Pose = BaseposeLafplatformelementguardinstance;

	if (Staticshould_booleanValuequestargument == true)
	{
		PlatformcorePointerElement = Instance_Valuepointer;
	}
else
false
;
	Instance_Result = *Instance_Valuepointer;

	return Instance_Result;
}
