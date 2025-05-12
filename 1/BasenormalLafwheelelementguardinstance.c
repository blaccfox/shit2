#include "Lafwheelelementguardinstance.c"

#include "Naflogsubject.c"

void* BasenormalLafwheelelementguardinstance
(
struct NormalLafwheelelementguardinstance* Normal_Valuepointerargument
)
{
	_Bool booleanTemporal, booleanTemporary;

	booleanTemporal = false;

	booleanTemporary = true;

	float_t X_integerfloatItem, Y_integerfloatEntry;

	X_integerfloatItem = 0.00F;

	Y_integerfloatEntry = 0.00F;

	int32_t integerCap, integerCount, integerSize;

	integerCap = 0;

	integerCount = 0;

	integerCount = integerCount + 1000;

	integerSize = 0.00F;

	integerSize = integerSize + integerCount;

	integerSize = integerSize - 1;

	do
	{
		_Bool isEqualYes, shouldBreakYes;

		isEqualYes
		=
		(
			integerCount
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
		float_t integerfloatSelf, integerfloatOther;

		integerfloatSelf
		=
		(
			(
				100.00F
				/
				(
					(float_t)integerSize
					/
					(float_t)integerCap
				)
			)
			*
			0.01F
		);

		integerfloatOther = FlattelLafwheelelementguardinstance();

		float_t Start_integerfloatItem, End_integerfloatEntry;

		Start_integerfloatItem
		=
		(
			2.00F
			*
			integerfloatSelf
		);

		End_integerfloatEntry
		=
		(
			2.00F
			+
			(
				2.00F
				*
				(
					1.00F
					-
					integerfloatSelf
				)
			)
		);

		booleanTemporal = booleanTemporary;

		booleanTemporal = booleanTemporal
		&&
		(
			Start_integerfloatItem
			<=
			integerfloatOther
		)
==
true
;
		booleanTemporal = booleanTemporal
		&&
		(
			End_integerfloatEntry
			>=
			integerfloatOther
		)
==
true
;
		if (booleanTemporal == true)
		{
			booleanTemporal = booleanTemporary;

			booleanTemporal = booleanTemporal
			&&
			(
				integerfloatSelf
				>
				0.50F
			)
==
true
;
			if (booleanTemporal)
			{
				Y_integerfloatEntry = +(integerfloatSelf);

				float_t integerfloatSelfself, integerfloatOtherother;

				integerfloatSelfself
				=
				(
					(
						1.00F
						-
						integerfloatOther
					)
					/
					(
						1.00F
						-
						3.00F
					)
				);

				integerfloatOtherother = integerfloatOther;

				booleanTemporal = booleanTemporary;

				booleanTemporal = booleanTemporal
				&&
				(
					integerfloatSelfself
					>
					0.50F
				)
==
true
;
				if (booleanTemporal)
				{
					float_t integerfloatSelfselfself, integerfloatOtherotherother;

					integerfloatSelfselfself
					=
					(
						(
							0.50F
							-
							integerfloatSelfself
						)
						/
						(
							0.50F
							-
							1.00F
						)
					);

					integerfloatSelfselfself = -(integerfloatSelfselfself);

					X_integerfloatItem = integerfloatSelfselfself;
				}
				else
				{
					float_t integerfloatSelfselfself, integerfloatOtherotherother;

					integerfloatSelfselfself
					=
					(
						(
							0.50F
							-
							integerfloatSelfself
						)
						/
						(
							0.50F
							-
							1.00F
						)
					);

					integerfloatSelfselfself = -(integerfloatSelfselfself);

					X_integerfloatItem = integerfloatSelfselfself;
				}
			}
			else
			{
				Y_integerfloatEntry = -(integerfloatSelf);

				float_t integerfloatSelfself, integerfloatOtherother;

				WheelcorePointerElement->Clockwise
				(
2.00F
				);

				integerfloatOtherother = FlattelLafwheelelementguardinstance
				(
WheelcorePointerElement->IntegerfloatElement
				);

				WheelcorePointerElement->Clockwise
				(
6.00F
				);

				integerfloatSelfself
				=
				(
					(
						1.00F
						-
						integerfloatOtherother
					)
					/
					(
						1.00F
						-
						3.00F
					)
				);

				booleanTemporal = booleanTemporary;

				booleanTemporal = booleanTemporal
				&&
				(
					integerfloatSelf
					>
					0.50F
				)
==
true
;
				if (booleanTemporal)
				{
					float_t integerfloatSelfselfself, integerfloatOtherotherother;

					integerfloatSelfselfself
					=
					(
						(
							0.50F
							-
							integerfloatSelfself
						)
						/
						(
							0.50F
							-
							1.00F
						)
					);

					X_integerfloatItem = integerfloatSelfselfself;
				}
				else
				{
					float_t integerfloatSelfselfself, integerfloatOtherotherother;

					integerfloatSelfselfself
					=
					(
						(
							0.50F
							-
							integerfloatSelfself
						)
						/
						(
							0.50F
							-
							1.00F
						)
					);

					X_integerfloatItem = integerfloatSelfselfself;
				}
			}
		}
else
false
;
		integerCap = integerCap + 1;

		continue;
	}
	while (true);

	struct NormalLafwheelelementguardinstance Normal_Result = (struct NormalLafwheelelementguardinstance){0};

	Normal_Result.XIntegerfloatElement = X_integerfloatItem;

	Normal_Result.YIntegerfloatElement = Y_integerfloatEntry;

	*Normal_Valuepointerargument = Normal_Result;

	return (void*)WheelcorePointerElement;
}
