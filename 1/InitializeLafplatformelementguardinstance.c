#ifndef initializelafplatformelementguardinstance_origin
#define initializelafplatformelementguardinstance_origin
#include "Nafstandardsubject.c"
typedef struct InitializeinformateLafplatformelementguardinstance
{
	int32_t StatusIntegerElement;

} InitializeinformateLafplatformelementguardinstance;
typedef struct InitializeLafplatformelementguardinstance
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

	struct InitializeinformateLafplatformelementguardinstance* InformatePointerElement;

} InitializeLafplatformelementguardinstance;
#endif
