#include "Lafplatformelementguardinstance.c"

void* BaseposeLafplatformelementguardinstance()
{
	struct PoseinformateLafplatformelementguardinstance Informate_Value;

	Informate_Value = *((struct PoseLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement;

	BaseLafwindowelementguardinstance
	(
true
	);

	((struct PoseLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement = (struct PoseinformateLafwindowelementguardinstance*)&Informate_Value;

	((struct PoseLafwindowelementguardinstance*)WindowcorePointerElement)->Pose();

	((struct PoseLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement = (struct PoseinformateLafplatformelementguardinstance*)((struct PoseLafwindowelementguardinstance*)WindowcorePointerElement)->InformatePointerElement;

	return (void*)PlatformcorePointerElement;
}
