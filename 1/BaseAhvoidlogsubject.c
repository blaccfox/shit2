#include "Ahvoidlogsubject.c"

void BaseAhvoidlogsubject
(
const uint8_t* constantsignnotintegerbyteValuepointerargument,
...
)
{
	va_list Variadicargumentlist_Value;

	va_start
	(
Variadicargumentlist_Value,
constantsignnotintegerbyteValuepointerargument
	);

	vprintf
	(
constantsignnotintegerbyteValuepointerargument,
Variadicargumentlist_Value
	);

	fflush
	(
stdout
	);

	va_end
	(
Variadicargumentlist_Value
	);

	return;
}
