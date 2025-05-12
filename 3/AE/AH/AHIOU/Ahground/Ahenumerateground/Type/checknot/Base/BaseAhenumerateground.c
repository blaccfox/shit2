#include "Ahenumerateground.c"

void BaseAhenumerateground()
{
	int32_t integerCap;

	integerCap = 0;

	do
	{
		_Bool isEqualYes, shouldBreakYes;

		isEqualYes = (GrounddataPointerElement->SizetypeElement == integerCap)
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
		void (*voidValuepointer)(void);

		voidValuepointer = GrounddataPointerElement->SetVoidpointerpointer[integerCap];

		voidValuepointer();

		integerCap = integerCap + 1;

		continue;
	}
	while (true);

	return;
}
