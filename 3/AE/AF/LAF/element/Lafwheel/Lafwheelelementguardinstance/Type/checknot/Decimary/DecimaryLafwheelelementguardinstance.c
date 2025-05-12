#include "Lafwheelelementguardinstance.c"

float DecimaryLafwheelelementguardinstance
(
float integerfloatValueargument
)
{
	float integerfloatResult = (float){0};

	float integerfloatValue;

	integerfloatValue = (float)truncf
	(
integerfloatValueargument
	);

	integerfloatResult = integerfloatValue;

	return integerfloatResult;
}
