#ifndef lafwindowelementguardinstance_origin
#define lafwindowelementguardinstance_origin
#include "Nafstandardsubject.c"
#include "Nafexternalsubject.c"
typedef struct Lafwindowelementguardinstance
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

} Lafwindowelementguardinstance;
#endif

#ifndef lafwindowelementguardinstance_import
#define lafwindowelementguardinstance_import
#include "InitializeLafwindowelementguardinstance.c"
#include "MainLafwindowelementguardinstance.c"
#include "FinalizeLafwindowelementguardinstance.c"
#include "AllocateLafwindowelementguardinstance.c"
#include "ThreadLafwindowelementguardinstance.c"
#include "SpawnLafwindowelementguardinstance.c"
#include "PoseLafwindowelementguardinstance.c"
#endif

#ifndef lafwindowelementguardinstance_export
#define lafwindowelementguardinstance_export
extern struct Lafwindowelementguardinstance* WindowcorePointerElement;
extern HWND HandleElement;
extern RECT RectangleElement;
extern LPVOID LongpointervoidElement;
extern BITMAP BitmapElement;
extern HBITMAP HandlebitmapElement;
extern HDC DedicateHandledevicecontextElement;
extern HDC MemoryHandledevicecontextElement;
extern LPVOID OverlayLongpointervoidElement;
extern BITMAP OverlayBitmapElement;
extern HBITMAP OverlayHandlebitmapElement;
extern HDC OverlaydedicateHandledevicecontextElement;
extern HDC OverlaymemoryHandledevicecontextElement;
extern _Bool StarthasBooleanElement;
extern void* BaseinitializeLafwindowelementguardinstance();
extern void* BasemainLafwindowelementguardinstance();
extern void* BasefinalizeLafwindowelementguardinstance();
extern void* BaseallocateLafwindowelementguardinstance();
extern void* BasethreadLafwindowelementguardinstance();
extern void* BasespawnLafwindowelementguardinstance();
extern void* BaseposeLafwindowelementguardinstance();
extern struct Lafwindowelementguardinstance BaseLafwindowelementguardinstance
(
_Bool Staticshould_booleanValuequestargument
);
#endif
