#ifndef shownormallafwheelelementguardinstance_old
#define shownormallafwheelelementguardinstance_old
#include "Naflogsubject.c"
#endif

#ifndef shownormallafwheelelementguardinstance_origin
#define shownormallafwheelelementguardinstance_origin
#include "Lafwheelelementguardinstance.c"
void ShowNormalLafwheelelementguardinstance
(
struct NormalLafwheelelementguardinstance Normal_Valueargument
)
{
	const uint8_t* constantsignnotintegerbyteValuepointer;

	constantsignnotintegerbyteValuepointer = ObjectNormalLafwheelelementguardinstance
	(
Normal_Valueargument
	);

	BaseAhvoidlogsubject
	(
"%s",
constantsignnotintegerbyteValuepointer
	);

	return;
}
#endif
