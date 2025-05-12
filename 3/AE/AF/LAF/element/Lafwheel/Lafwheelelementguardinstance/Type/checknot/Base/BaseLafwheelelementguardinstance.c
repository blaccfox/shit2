#include "Lafwheelelementguardinstance.c"

struct Lafwheelelementguardinstance BaseLafwheelelementguardinstance
(
_Bool Staticshould_booleanValuequestargument
)
{
	struct Lafwheelelementguardinstance Instance_Result = (struct Lafwheelelementguardinstance){0};

	static struct Lafwheelelementguardinstance Instance_Value;

	Instance_Value = (static struct Lafwheelelementguardinstance){0};

	struct Lafwheelelementguardinstance* Instance_Valuepointer;

	Instance_Valuepointer = &Instance_Value;

	Instance_Valuepointer->Calibrate = BasecalibrateLafwheelelementguardinstance;

	Instance_Valuepointer->Clockwise = BaseclockwiseLafwheelelementguardinstance;

	Instance_Valuepointer->Clockwisenot = BaseclockwisenotLafwheelelementguardinstance;

	Instance_Valuepointer->Normal = BasenormalLafwheelelementguardinstance;

	Instance_Valuepointer->Spiral = BasespiralLafwheelelementguardinstance;

	if (Staticshould_booleanValuequestargument == true)
	{
		WheelcorePointerElement = Instance_Valuepointer;
	}
else
false
;
	Instance_Result = *Instance_Valuepointer;;

	return Instance_Result;
}
