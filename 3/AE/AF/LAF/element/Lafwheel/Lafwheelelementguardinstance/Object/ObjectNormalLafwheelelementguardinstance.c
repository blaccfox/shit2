#ifndef objectnormalLafwheelelementguardinstance_origin
#define objectnormalLafwheelelementguardinstance_origin
#define objectnormalLafwheelelementguardinstance_self 4
#define objectnormalLafwheelelementguardinstance_other 512
#include "Lafwheelelementguardinstance.c"
const uint8_t* ObjectNormalLafwheelelementguardinstance
(
struct NormalLafwheelelementguardinstance Normal_Valueargument
)
{
	const uint8_t* constantsignnotintegerbyteResultpointer = &(const uint8_t){0};

	static uint8_t signnotintegerbyteArrayarray[objectnormalLafwheelelementguardinstance_self][objectnormalLafwheelelementguardinstance_other];

	sprintf
	(
signnotintegerbyteArrayarray[0],
")%s(",
"Normal"
	);

	sprintf
	(
signnotintegerbyteArrayarray[1],
"\t XIntegerfloatElement ][ %.2f",
Normal_Valueargument.XIntegerfloatElement
	);

	sprintf
	(
signnotintegerbyteArrayarray[2],
"\t YIntegerfloatElement ][ %.2f",
Normal_Valueargument.YIntegerfloatElement
	);

	sprintf
	(
signnotintegerbyteArrayarray[3],
"}{"
	);

	static uint8_t signnotintegerbyteArray[objectnormalLafwheelelementguardinstance_other];

	signnotintegerbyteArray[0] = '\0';

	int32_t integerCap;

	integerCap = 0;

	do
	{
		_Bool isEqualYes, shouldBreakYes;

		isEqualYes
		=
		(
			objectnormalLafwheelelementguardinstance_self
			==
			integerCap
		)
==
true
;
		shouldBreakYes = isEqualYes == true;

		if (shouldBreakYes == true)
		{
			break;
		}
else
false
;
		strcat
		(
signnotintegerbyteArray,
signnotintegerbyteArrayarray[integerCap]
		 );

		strcat
		(
signnotintegerbyteArray,
"\n"
		 );

		integerCap = integerCap + 1;

		continue;
	}
	while (true);

	const uint8_t* constantsignnotintegerbyteValuepointer;

	constantsignnotintegerbyteValuepointer = signnotintegerbyteArray;

	constantsignnotintegerbyteResultpointer = constantsignnotintegerbyteValuepointer;

	return constantsignnotintegerbyteResultpointer;
}
#endif
