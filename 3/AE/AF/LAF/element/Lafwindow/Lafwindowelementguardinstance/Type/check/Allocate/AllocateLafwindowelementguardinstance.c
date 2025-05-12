#ifndef allocatelafwindowelementguardinstance_origin
#define allocatelafwindowelementguardinstance_origin
#include "Nafstandardsubject.c"
#include "Nafexternalsubject.c"
typedef struct AllocateinformateLafwindowelementguardinstance
{
	SIZE_T SizetypeElement;

	LPVOID ResultLongpointervoidElement;

	int32_t StatusIntegerElement;

} AllocateinformateLafwindowelementguardinstance;
typedef struct AllocateLafwindowelementguardinstance
{
	void* (*Initialize)(void);

	void* (*Main)(void);

	void* (*Finalize)(void);

	void* (*Allocate)(void);

	void* (*Allocatenot)(void);

	void* (*Free)(void);

	void* (*Thread)(void);

	void* (*Spawn)(void);

	void* (*Pose)(void);

	struct AllocateinformateLafwindowelementguardinstance* InformatePointerElement;

} AllocateLafwindowelementguardinstance;
#endif
