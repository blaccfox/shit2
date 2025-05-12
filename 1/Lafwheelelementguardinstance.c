#ifndef lafwheelelementguardinstance_old
#define lafwheelelementguardinstance_old
#include "Nafballsubject.c"
#include "EnumerateLafwheelelementguardinstance.c"
#endif

#ifndef lafwheelelementguardinstance_origin
#define lafwheelelementguardinstance_origin
#include "Nafstandardsubject.c"
typedef struct NormalLafwheelelementguardinstance
{
	float XIntegerfloatElement;

	float YIntegerfloatElement;

} NormalLafwheelelementguardinstance;
typedef struct Lafwheelelementguardinstance
{
	enum Wheeltype WheeltypeElement;

	float IntegerfloatElement;

	void* (*Calibrate)(void);

	void* (*Clockwise)
	(
float integerfloatValueargument
	);

	void* (*Clockwisenot)
	(
float integerfloatValueargument
	);

	void* (*Normal)
	(
struct NormalLafwheelelementguardinstance* Normal_Valuepointerargument
	);

	void* (*Spiral)
	(
float_t Extrude____integerfloatitemargument____ITEMARGUMENT,
float_t Rotate____integerfloatentryargument____ENTRYARGUMENT,
struct Lafballelementguardinstance Ball_Selfargument,
struct Lafballelementguardinstance Ball_Otherargument
	);

} Lafwheelelementguardinstance;
#endif

#ifndef lafwheelelementguardinstance_export
#define lafwheelelementguardinstance_export
extern struct Lafwheelelementguardinstance* WheelcorePointerElement;
extern void* BasecalibrateLafwheelelementguardinstance();
extern void* BaseclockwiseLafwheelelementguardinstance
(
float integerfloatValueargument
);
extern void* BaseclockwisenotLafwheelelementguardinstance
(
float integerfloatValueargument
);
extern void* BasenormalLafwheelelementguardinstance
(
struct NormalLafwheelelementguardinstance* Normal_Valuepointerargument
);
extern void* BasespiralLafwheelelementguardinstance
(
float_t Extrude____integerfloatitemargument____ITEMARGUMENT,
float_t Rotate____integerfloatentryargument____ENTRYARGUMENT,
struct Lafballelementguardinstance Ball_Selfargument,
struct Lafballelementguardinstance Ball_Otherargument
);
extern struct Lafwheelelementguardinstance BaseLafwheelelementguardinstance
(
_Bool Staticshould_booleanValuequestargument
);
extern const uint8_t* ObjectLafwheelelementguardinstance
(
struct Lafwheelelementguardinstance Wheel_Valueargument
);
extern const uint8_t* ObjectNormalLafwheelelementguardinstance
(
struct NormalLafwheelelementguardinstance Normal_Valueargument
);
extern void ShowLafwheelelementguardinstance
(
struct Lafwheelelementguardinstance Wheel_Valueargument
);
extern void ShowNormalLafwheelelementguardinstance
(
struct NormalLafwheelelementguardinstance Normal_Valueargument
);
extern float DecimalLafwheelelementguardinstance
(
float integerfloatValueargument
);
extern float DecimaryLafwheelelementguardinstance
(
float integerfloatValueargument
);
extern enum Wheeltype NextLafwheelelementguardinstance
(
enum Wheeltype Wheeltype_Valueargument
);
extern enum Wheeltype PreviousLafwheelelementguardinstance
(
enum Wheeltype Wheeltype_Valueargument
);
extern float_t FlattelLafwheelelementguardinstance();
#endif
