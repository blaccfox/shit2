#include "Lafwheelelementguardinstance.c"

void* BasecalibrateLafwheelelementguardinstance()
{
	WheelcorePointerElement->WheeltypeElement = (enum Wheeltype){Wheeltyponefirstprimarysingle};

	WheelcorePointerElement->IntegerfloatElement = 0.00F;

	return (void*)WheelcorePointerElement;
}
