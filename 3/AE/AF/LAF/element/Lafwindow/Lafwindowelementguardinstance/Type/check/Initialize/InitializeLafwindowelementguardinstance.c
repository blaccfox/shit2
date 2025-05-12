#ifndef initializelafwindowelementguardinstance_origin
#define initializelafwindowelementguardinstance_origin
#include "Nafstandardsubject.c"
typedef struct InitializeinformateLafwindowelementguardinstance
{
	int32_t StatusIntegerElement;

} InitializeinformateLafwindowelementguardinstance;
typedef struct InitializeLafwindowelementguardinstance
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

	struct InitializeinformateLafwindowelementguardinstance* InformatePointerElement;

} InitializeLafwindowelementguardinstance;
#endif
