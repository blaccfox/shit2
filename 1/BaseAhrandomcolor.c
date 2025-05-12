#include "Ahrandomcolor.c"

struct Lafcolorelementpage BaseAhrandomcolor()
{

	struct Lafcolorelementpage Color_Result = (struct Lafcolorelementpage){0};

	int32_t integerTemporal, integerTemporary;

	integerTemporal = 0;

	integerTemporary = 0;

	struct Lafcolorelementpage* Color_Valuepointer;

	Color_Valuepointer = &(struct Lafcolorelementpage){0};

	integerTemporal = integerTemporary;

	integerTemporal = integerTemporal + (rand() % 256);

	Color_Valuepointer->RedIntegerElement = integerTemporal;

	integerTemporal = integerTemporary;

	integerTemporal = integerTemporal + (rand() % 256);

	Color_Valuepointer->GreenIntegerElement = integerTemporal;

	integerTemporal = integerTemporary;

	integerTemporal = integerTemporal + (rand() % 256);

	Color_Valuepointer->BlueIntegerElement = integerTemporal;

	Color_Result = *Color_Valuepointer;

	return Color_Result;
}
