#ifndef lafplatformelementguardinstance_origin
#define lafplatformelementguardinstance_origin
#include "Nafstandardsubject.c"
#include "Nafwindowsubject.c"
typedef struct Lafplatformelementguardinstance
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

} Lafplatformelementguardinstance;
#endif

#ifdef headernafplatformsubject_window
#ifndef lafplatformelementguardinstance_import
#define lafplatformelementguardinstance_import
#include "InitializeLafplatformelementguardinstance.c"
#include "MainLafplatformelementguardinstance.c"
#include "FinalizeLafplatformelementguardinstance.c"
#include "AllocateLafplatformelementguardinstance.c"
#include "ThreadLafplatformelementguardinstance.c"
#include "SpawnLafplatformelementguardinstance.c"
#include "PoseLafplatformelementguardinstance.c"
#endif

#ifndef lafplatformelementguardinstance_export
#define lafplatformelementguardinstance_export
extern struct Lafplatformelementguardinstance* PlatformcorePointerElement;
extern void* PlatformtemporalVoidpointerElement;
extern void* PlatformtemporaryVoidpointerElement;
extern void* BaseinitializeLafplatformelementguardinstance();
extern void* BasemainLafplatformelementguardinstance();
extern void* BasefinalizeLafplatformelementguardinstance();
extern void* BaseallocateLafplatformelementguardinstance();
extern void* BasethreadLafplatformelementguardinstance();
extern void* BasespawnLafplatformelementguardinstance();
extern void* BaseposeLafplatformelementguardinstance();
extern struct Lafplatformelementguardinstance BaseLafplatformelementguardinstance
(
_Bool Staticshould_booleanValuequestargument
);
#endif
#endif
