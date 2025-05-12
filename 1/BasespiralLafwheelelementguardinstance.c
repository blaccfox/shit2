#include "Lafwheelelementguardinstance.c"

void* BasespiralLafwheelelementguardinstance
(
float_t Extrude____integerfloatitemargument____ITEMARGUMENT,
float_t Rotate____integerfloatentryargument____ENTRYARGUMENT,
struct Lafballelementguardinstance Ball_Selfargument,
struct Lafballelementguardinstance Ball_Otherargument
)
{
	_Bool booleanTemporal, booleanTemporary;

	booleanTemporal = false;

	booleanTemporary = true;

	BaseAhvoidlogsubject("start");

	ShowelementLafballelementguardinstance(Ball_Selfargument);

	ShowelementLafballelementguardinstance(Ball_Otherargument);

	const float_t Active_integerfloatValue = 0.01F;

	float_t integerfloatCap, integerfloatCount, integerfloatSize, integerfloatLength;

	integerfloatCap
	=
	(
		(
			fmaxf
			(
				fabsf
				(
					(
						Ball_Selfargument.XIntegerfloatElement
						-
						Ball_Otherargument.XIntegerfloatElement
					)
				)
				,
				Active_integerfloatValue
			)
			+
			fmaxf
			(
				fabsf
				(
					(
						Ball_Selfargument.YIntegerfloatElement
						-
						Ball_Otherargument.YIntegerfloatElement
					)
				)
				,
				Active_integerfloatValue
			)
		)
		/
		2.00F
	);

	integerfloatCount = integerfloatCap;

	integerfloatLength = 0.00F;

	static struct NormalLafwheelelementguardinstance Normal_Value;

	Normal_Value = (static struct NormalLafwheelelementguardinstance){0};

	struct NormalLafwheelelementguardinstance* Normal_Valuepointer;

	Normal_Valuepointer = &Normal_Value;

	float_t Newx_integerfloatItem, Newy_integerfloatEntry;

	Newx_integerfloatItem = 0.00F;

	Newy_integerfloatEntry = 0.00F;

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
		WheelcorePointerElement->Clockwise
		(
Rotate____integerfloatentryargument____ENTRYARGUMENT
		);

		WheelcorePointerElement->Normal
		(
Normal_Valuepointer
		);

		Newx_integerfloatItem
		=
		(
			Ball_Selfargument.XIntegerfloatElement
			+
			(
				integerfloatLength
				*
				Normal_Value.XIntegerfloatElement
			)
		);

		Newy_integerfloatEntry
		=
		(
			Ball_Selfargument.YIntegerfloatElement
			+
			(
				integerfloatLength
				*
				Normal_Value.YIntegerfloatElement
			)
		);

		integerfloatSize
		=
		(
			(
				fmaxf
				(
					fabsf
					(
						(
							Newx_integerfloatItem
							-
							Ball_Otherargument.XIntegerfloatElement
						)
					)
					,
					Active_integerfloatValue
				)
				+
				fmaxf
				(
					fabsf
					(
						(
							Newy_integerfloatEntry
							-
							Ball_Otherargument.YIntegerfloatElement
						)
					)
					,
					Active_integerfloatValue
				)
			)
			/
			2.00F
		);

		booleanTemporal = booleanTemporary;

		booleanTemporal = booleanTemporal
		&&
		(
			integerfloatSize
			<
			integerfloatCap
		)
==
true
;
		booleanTemporal = booleanTemporal
		&&
		(
			Newx_integerfloatItem
			<
			0.00F
		)
==
false
;
		booleanTemporal = booleanTemporal
		&&
		(
			Newy_integerfloatEntry
			<
			0.00F
		)
==
false
;
		if (booleanTemporal == true)
		{
			BaseAhvoidlogsubject("ASSIGENED [%.2f] [%.2f] <%.2f> <%.2f>", Newx_integerfloatItem, Newy_integerfloatEntry, Ball_Otherargument.XIntegerfloatElement, Ball_Otherargument.YIntegerfloatElement);

			integerfloatCap = integerfloatSize;
		}
else
false
;
		booleanTemporal = booleanTemporary;

		booleanTemporal = booleanTemporal
		&&
		(
			integerfloatSize
			>=
			(
				integerfloatCount
				*
				2.00F
			)
		)
==
true
;
		if (booleanTemporal == true)
		{
			Should_booleanValueidle = false;

			continue;
		}
else
false
;
		/*BaseAhvoidlogsubject("\n<<<%.2f>> [%.2f] [%.2f] exited somehow", integerfloatCap, integerfloatSize, integerfloatCap);
	*/
		BaseAhvoidlogsubject("\nFrom outward [newX:%.2f|newY:%.2f][distanceStatic:%.2f|distanceDynamic:%.2f](extrude:%.2f){normalX:%.2f|normalY:%.2f} trying to get the smallest static distance\n", Newx_integerfloatItem, Newy_integerfloatEntry, integerfloatCap, integerfloatSize, integerfloatLength, Normal_Value.XIntegerfloatElement, Normal_Value.YIntegerfloatElement);

		ShowLafwheelelementguardinstance(*WheelcorePointerElement);

		//Sleep(1000);

		integerfloatLength = integerfloatLength + Extrude____integerfloatitemargument____ITEMARGUMENT;

		continue;
	}
	while (true);

	integerfloatLength = integerfloatLength - Extrude____integerfloatitemargument____ITEMARGUMENT;

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
		WheelcorePointerElement->Clockwisenot
		(
Rotate____integerfloatentryargument____ENTRYARGUMENT
		);

		WheelcorePointerElement->Normal
		(
Normal_Valuepointer
		);

		Newx_integerfloatItem
		=
		(
			Ball_Selfargument.XIntegerfloatElement
			+
			(
				integerfloatLength
				*
				Normal_Value.XIntegerfloatElement
			)
		);

		Newy_integerfloatEntry
		=
		(
			Ball_Selfargument.YIntegerfloatElement
			+
			(
				integerfloatLength
				*
				Normal_Value.YIntegerfloatElement
			)
		);

		integerfloatSize
		=
		(
			(
				fmaxf
				(
					fabsf
					(
						(
							Newx_integerfloatItem
							-
							Ball_Otherargument.XIntegerfloatElement
						)
					)
					,
					Active_integerfloatValue
				)
				+
				fmaxf
				(
					fabsf
					(
						(
							Newy_integerfloatEntry
							-
							Ball_Otherargument.YIntegerfloatElement
						)
					)
					,
					Active_integerfloatValue
				)
			)
			/
			2.00F
		);

		/*if (((integerfloatSize - 500.00F) <= integerfloatCap) && ((integerfloatSize + 500.00F) >= integerfloatCap)		&&
				(
					Newx_integerfloatItem
					<
					0.00F
				)
				&&
				(
					Newy_integerfloatEntry
					<
					0.00F
				)
				)
		{
			BaseAhvoidlogsubject("WEIRD");

			break;
		}*/

		booleanTemporal = booleanTemporary;

		booleanTemporal = booleanTemporal
		&&
		(
			(int32_t)integerfloatSize
			==
			(int32_t)integerfloatCap
		)
==
true
;
		booleanTemporal = booleanTemporal
		&&
		(
			Newx_integerfloatItem
			<
			0.00F
		)
==
false
;
		booleanTemporal = booleanTemporal
		&&
		(
			Newy_integerfloatEntry
			<
			0.00F
		)
==
false
;
		if (booleanTemporal == true)
		{
			BaseAhvoidlogsubject("EXITED WITH SUCCESS");

			ShowNormalLafwheelelementguardinstance(Normal_Value);

			break;
		}
else
false
;
		booleanTemporal = booleanTemporary;

		booleanTemporal = booleanTemporal
		&&
		(
			integerfloatSize
			>=
			(
				integerfloatCount
				*
				10.00F
			)
		)
==
true
;
		if (booleanTemporal == true)
		{
			Should_booleanValueidle = false;

			BaseAhvoidlogsubject("EXITED WITH NO RESOLUTION");

			continue;
		}
else
false
;
		BaseAhvoidlogsubject("\nFrom inward [newX:%.2f|newY:%.2f][distanceStatic:%.2f|distanceDynamic:%.2f](extrude:%.2f){normalX:%.2f|normalY:%.2f} trying to get the smallest static distance\n", Newx_integerfloatItem, Newy_integerfloatEntry, integerfloatCap, integerfloatSize, integerfloatLength, Normal_Value.XIntegerfloatElement, Normal_Value.YIntegerfloatElement);

		ShowLafwheelelementguardinstance(*WheelcorePointerElement);

		//Sleep(1000);

		integerfloatLength = integerfloatLength - Extrude____integerfloatitemargument____ITEMARGUMENT;

		continue;
	}
	while (true);

	return (void*)WheelcorePointerElement;
}
