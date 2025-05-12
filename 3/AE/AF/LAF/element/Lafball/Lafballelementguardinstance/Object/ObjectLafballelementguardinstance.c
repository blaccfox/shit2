#ifndef objectlafballelementguardinstance_origin
#define objectlafballelementguardinstance_origin
#include "Lafballelementguardinstance.c"
#include "Naflogsubject.c"
#define objectlafballelementguardinstance_self 5
#define objectlafballelementguardinstance_other 512
const uint8_t* ObjectLafballelementguardinstance
(
struct Lafballelementguardinstance Ball_Valueargument
)
{
	const uint8_t* constantsignnotintegerbyteResultpointer = &(const uint8_t){0};

	uint8_t signnotintegerbyteArrayarray[objectlafballelementguardinstance_self][objectlafballelementguardinstance_other];

	sprintf
	(
signnotintegerbyteArrayarray[0],
")%s(",
"Ball"
	);

	sprintf
	(
signnotintegerbyteArrayarray[1],
"\t XIntegerfloatElement ][ %.2f",
Ball_Valueargument.XIntegerfloatElement
	);

	sprintf
	(
signnotintegerbyteArrayarray[2],
"\t YIntegerfloatElement ][ %.2f",
Ball_Valueargument.YIntegerfloatElement
	);

	sprintf
	(
signnotintegerbyteArrayarray[3],
"\t RadiusIntegerfloatElement ][ %.2f",
Ball_Valueargument.RadiusIntegerfloatElement
	);

	sprintf
	(
signnotintegerbyteArrayarray[4],
"}{"
	);

	uint8_t signnotintegerbyteArray[objectlafballelementguardinstance_other];

	signnotintegerbyteArray[0] = '\0';

	int32_t integerCap;

	integerCap = 0;

	do
	{
		_Bool isEqualYes, shouldBreakYes;

		isEqualYes = (objectlafballelementguardinstance_self == integerCap)
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
