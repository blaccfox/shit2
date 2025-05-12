#include "Lafwheelelementguardinstance.c"

float_t FlattelLafwheelelementguardinstance()
{
	float_t integerfloatResult = (float_t){0};

	float_t integerfloatValue;

	integerfloatValue = (float_t){0};

	switch (WheelcorePointerElement->WheeltypeElement)
	{
		case Wheeltyponefirstprimarysingle:
			integerfloatValue = 0.00F;
			break;

		case Wheeltypetwosecondsecondarydouble:
			integerfloatValue = 1.00F;
			break;

		case Wheeltypethreethirdtertiarytriple:
			integerfloatValue = 2.00F;
			break;

		case Wheeltypefourfourthquaternaryquadruple:
			integerfloatValue = 3.00F;
			break;

		default:
			break;
	}

	integerfloatValue = integerfloatValue + DecimalLafwheelelementguardinstance
	(
WheelcorePointerElement->IntegerfloatElement
	);

	integerfloatResult = integerfloatValue;

	return integerfloatResult;
}
