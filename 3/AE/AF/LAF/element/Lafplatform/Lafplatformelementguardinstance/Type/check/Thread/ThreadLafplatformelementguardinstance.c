#ifndef threadlafplatformelementguardinstance_origin
#define threadlafplatformelementguardinstance_origin
#include "Nafstandardsubject.c"
#include "Nafexternalsubject.c"
typedef struct ThreadinformateLafplatformelementguardinstance
{
	LPTHREAD_START_ROUTINE LongpointerthreadstartroutineElement;

	LPVOID LongpointervoidElement;

	HANDLE ResultHandleElement;

	int32_t StatusIntegerElement;

} ThreadinformateLafplatformelementguardinstance;
typedef struct ThreadLafplatformelementguardinstance
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

	struct ThreadinformateLafplatformelementguardinstance* InformatePointerElement;

} ThreadLafplatformelementguardinstance;
#endif
