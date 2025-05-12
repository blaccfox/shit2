#ifndef poselafplatformelementguardinstance_origin
#define poselafplatformelementguardinstance_origin
#include "Nafstandardsubject.c"
typedef struct PoseinformateLafplatformelementguardinstance
{
	int32_t ResultxIntegerElement;

	int32_t ResultyIntegerElement;

	int32_t StatusIntegerElement;

} PoseinformateLafplatformelementguardinstance;
typedef struct PoseLafplatformelementguardinstance
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

	struct PoseinformateLafplatformelementguardinstance* InformatePointerElement;

} PoseLafplatformelementguardinstance;
#endif
