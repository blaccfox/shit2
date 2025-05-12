#ifndef objectlafwheelelementguardinstance_old
#define objectlafwheelelementguardinstance_old
#include "Nafstandardsubject.c"
#endif

#ifndef objectlafwheelelementguardinstance_origin
#define objectlafwheelelementguardinstance_origin
#define objectlafwheelelementguardinstance_self 4
#define objectlafwheelelementguardinstance_other 512
#include "Lafwheelelementguardinstance.c"
const uint8_t* ObjectLafwheelelementguardinstance
(
struct Lafwheelelementguardinstance Wheel_Valueargument
)
{
	const uint8_t* constantsignnotintegerbyteResultpointer = &(const uint8_t){0};

	static uint8_t signnotintegerbyteArrayarray[objectlafwheelelementguardinstance_self][objectlafwheelelementguardinstance_other];

	sprintf
	(
signnotintegerbyteArrayarray[0],
")%s(",
"Wheel"
	);

	sprintf
	(
signnotintegerbyteArrayarray[1],
"\t WheeltypeElement ][ %i",
Wheel_Valueargument.WheeltypeElement
	);

	sprintf
	(
signnotintegerbyteArrayarray[2],
"\t IntegerfloatElement ][ %.2f",
Wheel_Valueargument.IntegerfloatElement
	);


	sprintf
	(
signnotintegerbyteArrayarray[3],
"}{"
	);

	static uint8_t signnotintegerbyteArray[objectlafwheelelementguardinstance_other];

	signnotintegerbyteArray[0] = '\0';

	int32_t integerCap;

	integerCap = 0;

	do
	{
		_Bool isEqualYes, shouldBreakYes;

		isEqualYes
		=
		(
			objectlafwheelelementguardinstance_self
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


