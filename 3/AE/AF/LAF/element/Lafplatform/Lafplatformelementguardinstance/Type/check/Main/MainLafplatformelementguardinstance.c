#ifndef mainlafplatformelementguardinstance_origin
#define mainlafplatformelementguardinstance_origin
#include "Nafstandardsubject.c"
typedef struct MaininformateLafplatformelementguardinstance
{
	int32_t StatusIntegerElement;

} MaininformateLafplatformelementguardinstance;
typedef struct MainLafplatformelementguardinstance
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

	struct MaininformateLafplatformelementguardinstance* InformatePointerElement;

} MainLafplatformelementguardinstance;
#endif
