#define finalizelafwindowelementguardinstance_origin
#ifdef finalizelafwindowelementguardinstance_origin
#include "Nafstandardsubject.c"
typedef struct FinalizeinformateLafwindowelementguardinstance
{
	int32_t StatusIntegerElement;

} FinalizeinformateLafwindowelementguardinstance;
typedef struct FinalizeLafwindowelementguardinstance
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

	struct FinalizeinformateLafwindowelementguardinstance* InformatePointerElement;

} FinalizeLafwindowelementguardinstance;
#endif
