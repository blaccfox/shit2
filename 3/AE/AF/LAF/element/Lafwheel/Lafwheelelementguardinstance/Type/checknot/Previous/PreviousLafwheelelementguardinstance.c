#include "Lafwheelelementguardinstance.c"

enum Wheeltype PreviousLafwheelelementguardinstance
(
enum Wheeltype Wheeltype_Valueargument
)
{
	enum Wheeltype Wheeltype_Result = (enum Wheeltype){0};

	enum Wheeltype Wheeltype_Value;

	Wheeltype_Value = (enum Wheeltype){0};

	switch (Wheeltype_Valueargument)
	{
		case Wheeltyponefirstprimarysingle:
			Wheeltype_Value = (enum Wheeltype){Wheeltypefourfourthquaternaryquadruple};
			break;

		case Wheeltypetwosecondsecondarydouble:
			Wheeltype_Value = (enum Wheeltype){Wheeltyponefirstprimarysingle};
			break;

		case Wheeltypethreethirdtertiarytriple:
			Wheeltype_Value = (enum Wheeltype){Wheeltypetwosecondsecondarydouble};
			break;

		case Wheeltypefourfourthquaternaryquadruple:
			Wheeltype_Value = (enum Wheeltype){Wheeltypethreethirdtertiarytriple};
			break;

		default:
			Wheeltype_Value = (enum Wheeltype){Wheeltypeunset};
			break;
	}

	Wheeltype_Result = Wheeltype_Value;

	return Wheeltype_Result;
}
