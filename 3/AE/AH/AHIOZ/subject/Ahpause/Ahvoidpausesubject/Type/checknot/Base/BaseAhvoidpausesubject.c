#include "Ahvoidpausesubject.c"

#include "Naflogsubject.c"

void BaseAhvoidpausesubject()
{
	_Bool booleanTemporal, booleanTemporary;

	booleanTemporal = false;

	booleanTemporary = true;

	BaseAhvoidlogsubject("pause");

	clock_t Clocktype_Self, Clocktype_Other;

	Clocktype_Self = clock();

	Clocktype_Other = (clock_t){0};

	_Bool Should_booleanValueidle;

	Should_booleanValueidle = true;

	do
	{
		_Bool isEqualYes, shouldBreakYes;

		isEqualYes = Should_booleanValueidle == true;

		shouldBreakYes = isEqualYes == false;

		if (shouldBreakYes == true)
		{
			break;
		}
else
false
;
		Clocktype_Other = clock();

		int64_t integerlongValue;

		integerlongValue = 0;

		integerlongValue = integerlongValue + (int64_t)Clocktype_Other;

		integerlongValue = integerlongValue - (int64_t)Clocktype_Self;

		booleanTemporal = booleanTemporary;

		booleanTemporal = booleanTemporal
		&&
		(
			integerlongValue
			>=
			1000
		)
==
true
;
		if (booleanTemporal == true)
		{
			BaseAhvoidlogsubject("stuck");

			booleanTemporal = booleanTemporary;

			booleanTemporal = booleanTemporary && GrounddataPointerElement->PauseshouldBooleanElement == false;

			if (booleanTemporal == true)
			{
				Should_booleanValueidle = false;

				continue;
			}
else
false
;
			Clocktype_Self = Clocktype_Other;
		}
else
false
;
		continue;
	}
	while (true);

	return;
}
