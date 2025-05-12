#ifndef threadlafwindowelementguardinstance_origin
#define threadlafwindowelementguardinstance_origin
#include "Nafstandardsubject.c"
#include "Nafexternalsubject.c"
typedef struct ThreadLafwindowelementguardinstance
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

	struct ThreadinformateLafwindowelementguardinstance* InformatePointerElement;

} ThreadLafwindowelementguardinstance;
#endif

#ifdef headernafplatformsubject_window
#ifndef threadlafwindowelementguardinstance_new
#define threadlafwindowelementguardinstance_new
typedef struct ThreadinformateLafwindowelementguardinstance
{
	LPTHREAD_START_ROUTINE LongpointerthreadstartroutineElement;

	LPVOID LongpointervoidElement;

	HANDLE ResultHandleElement;

	int32_t StatusIntegerElement;

} ThreadinformateLafwindowelementguardinstance;
#endif
#endif



