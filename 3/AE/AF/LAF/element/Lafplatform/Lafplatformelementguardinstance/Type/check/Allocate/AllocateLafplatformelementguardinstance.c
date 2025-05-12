#ifndef allocatelafplatformelementguardinstance_origin
#define allocatelafplatformelementguardinstance_origin
#include "Nafstandardsubject.c"
#include "Nafexternalsubject.c"
typedef struct AllocateinformateLafplatformelementguardinstance
{
	SIZE_T SizetypeElement;

	LPVOID ResultLongpointervoidElement;

	int32_t StatusIntegerElement;

} AllocateinformateLafplatformelementguardinstance;
typedef struct AllocateLafplatformelementguardinstance
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

	struct AllocateinformateLafplatformelementguardinstance* InformatePointerElement;

} AllocateLafplatformelementguardinstance;
#endif
