#define poselafwindowelementguardinstance_origin
#ifdef poselafwindowelementguardinstance_origin
#include "Nafstandardsubject.c"
typedef struct PoseinformateLafwindowelementguardinstance
{
	int32_t ResultxIntegerElement;

	int32_t ResultyIntegerElement;

	int32_t StatusIntegerElement;

} PoseinformateLafwindowelementguardinstance;
typedef struct PoseLafwindowelementguardinstance
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

	struct PoseinformateLafwindowelementguardinstance* InformatePointerElement;

} PoseLafwindowelementguardinstance;
#endif
