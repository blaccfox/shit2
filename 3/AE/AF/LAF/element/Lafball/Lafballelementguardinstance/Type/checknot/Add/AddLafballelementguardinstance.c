#include "Lafballelementguardinstance.c"

void AddLafballelementguardinstance
(
struct Lafballelementguardinstance Ball_Valueargument
)
{
	size_t Sizetype_Value;

	Sizetype_Value
	=
	(
		(
			NumbernumeralnumericballIntegerElement
			+
			1
		)
		*
		sizeof
		(
struct Lafballelementguardinstance
		)
	);

	SetBallPointer = (struct Lafballelementguardinstance*)HeapReAlloc
	(
GetProcessHeap(),
(DWORD){0},
(LPVOID)SetBallPointer,
(SIZE_T)Sizetype_Value
	);

	SetBallPointer[NumbernumeralnumericballIntegerElement] = Ball_Valueargument;

	NumbernumeralnumericballIntegerElement = NumbernumeralnumericballIntegerElement + 1;

	return;
}
