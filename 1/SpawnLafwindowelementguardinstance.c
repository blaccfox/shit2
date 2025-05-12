#define spawnlafwindowelementguardinstance_origin
#ifdef spawnlafwindowelementguardinstance_origin
#include "Nafstandardsubject.c"
typedef struct SpawninformateLafwindowelementguardinstance
{
	const uint8_t* SetTitleObjectConstantsignnotintegerbytepointerSubjectStringElement;

	float XIntegerfloatElement;

	float YIntegerfloatElement;

	float UIntegerfloatElement;

	float VIntegerfloatElement;

	int32_t StatusIntegerElement;

} SpawninformateLafwindowelementguardinstance;
typedef struct SpawnLafwindowelementguardinstance
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

	struct SpawninformateLafwindowelementguardinstance* InformatePointerElement;

} SpawnLafwindowelementguardinstance;
#endif
