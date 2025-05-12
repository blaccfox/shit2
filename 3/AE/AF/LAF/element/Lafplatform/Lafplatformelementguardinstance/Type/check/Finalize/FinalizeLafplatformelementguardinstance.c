#ifndef finalizelafplatformelementguardinstance_origin
#define finalizelafplatformelementguardinstance_origin
#include "Nafstandardsubject.c"
typedef struct FinalizeinformateLafplatformelementguardinstance
{
	int32_t StatusIntegerElement;

} FinalizeinformateLafplatformelementguardinstance;
typedef struct FinalizeLafplatformelementguardinstance
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

	struct FinalizeinformateLafplatformelementguardinstance* InformatePointerElement;

} FinalizeLafplatformelementguardinstance;
#endif
