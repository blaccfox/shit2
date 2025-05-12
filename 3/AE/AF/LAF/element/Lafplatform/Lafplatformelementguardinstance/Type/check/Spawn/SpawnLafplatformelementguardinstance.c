#ifndef spawnlafplatformelementguardinstance_origin
#define spawnlafplatformelementguardinstance_origin
#include "Nafstandardsubject.c"
typedef struct SpawninformateLafplatformelementguardinstance
{
	const uint8_t* SetTitleObjectConstantsignnotintegerbytepointerSubjectStringElement;

	float XIntegerfloatElement;

	float YIntegerfloatElement;

	float UIntegerfloatElement;

	float VIntegerfloatElement;

	int32_t StatusIntegerElement;

} SpawninformateLafplatformelementguardinstance;
typedef struct SpawnLafplatformelementguardinstance
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

	struct SpawninformateLafplatformelementguardinstance* InformatePointerElement;

} SpawnLafplatformelementguardinstance;
#endif
