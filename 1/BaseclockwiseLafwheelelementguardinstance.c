#include "Lafwheelelementguardinstance.c"

#include "Naflogsubject.c"

void* BaseclockwiseLafwheelelementguardinstance
(
float integerfloatValueargument
)
{
	_Bool booleanTemporal, booleanTemporary;

	booleanTemporal = false;

	booleanTemporary = true;

	float integerfloatValue;

	integerfloatValue = 0.00F;

	integerfloatValue = integerfloatValue + DecimalLafwheelelementguardinstance
	(
integerfloatValueargument
	);

	integerfloatValue = integerfloatValue + DecimalLafwheelelementguardinstance
	(
WheelcorePointerElement->IntegerfloatElement
	);

	booleanTemporal = booleanTemporary;

	booleanTemporal = booleanTemporal
	&&
	(
		integerfloatValue
		>=
		1.00F
	)
==
true
;
	if (booleanTemporal == true)
	{
		WheelcorePointerElement->WheeltypeElement = NextLafwheelelementguardinstance
		(
WheelcorePointerElement->WheeltypeElement
		);

		integerfloatValue = integerfloatValue - 1.00F;
	}
else
false
;
	float_t integerfloatCap;

	integerfloatCap = 0.00F;

	integerfloatCap = integerfloatCap + DecimaryLafwheelelementguardinstance
	(
integerfloatValueargument
	);

	do
	{
		_Bool isEqualYes, shouldBreakYes;

		isEqualYes =
		(
			integerfloatCap
			<=
			0.00F
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
		WheelcorePointerElement->WheeltypeElement = NextLafwheelelementguardinstance
		(
WheelcorePointerElement->WheeltypeElement
		);

		integerfloatCap = integerfloatCap - 1.00F;

		continue;
	}
	while (true);

	WheelcorePointerElement->IntegerfloatElement = integerfloatValue;

	return (void*)WheelcorePointerElement;
}
