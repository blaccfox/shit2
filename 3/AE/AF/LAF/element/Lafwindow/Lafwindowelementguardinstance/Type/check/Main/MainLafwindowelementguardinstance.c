#define mainlafwindowelementguardinstance_origin
#ifdef mainlafwindowelementguardinstance_origin
#include "Nafstandardsubject.c"
typedef struct MaininformateLafwindowelementguardinstance
{
	int32_t StatusIntegerElement;

} MaininformateLafwindowelementguardinstance;
typedef struct MainLafwindowelementguardinstance
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

	struct MaininformateLafwindowelementguardinstance* InformatePointerElement;

} MainLafwindowelementguardinstance;
#endif
