#ifndef datanafcanvassubject_origin
#define datanafcanvassubject_origin
#include "Nafstandardsubject.c"
#include "Nafcanvassubject.c"
#include "Nafballsubject.c"
typedef struct DataNafcanvassubject
{
	int32_t WidthIntegerElement;

	int32_t HeightIntegerElement;

	int32_t UniformIntegerElement;

	struct Iafcanvaspixelguardpage** SetPixelPointerPointer;

	struct Lafballelementguardinstance IceBallElement;

	struct Lafballelementguardinstance FreezeBallElement;

	_Bool SpacehasBooleanElement;

} DataNafcanvassubject;
#endif
