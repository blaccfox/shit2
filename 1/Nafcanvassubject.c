#define nafcanvassubject_origin
#ifdef nafcanvassubject_origin
#include "Nafballsubject.c"
typedef void Nafcanvassubject;
#endif

#define nafcanvassubject_import
#ifdef nafcanvassubject_import
#include "Iafcanvaspixelguardpage.c"
#include "DataNafcanvassubject.c"
#endif

#define nafcanvassubject_export
#ifdef nafcanvassubject_export
extern struct DataNafcanvassubject* CanvasdataPointerElement;
extern void BaseAhboundcanvas();
extern void BaseAhconfigurecanvas
(
int32_t Width___integeritemargument___ITEMARGUMENT,
int32_t Height___integerentryargument___ENTRYARGUMENT
);
extern void BaseAhpopulatecanvas();
extern void BaseAhrendercanvas();
extern void BaseAhdisposecanvas();
extern void BaseAhoverlaycanvas();
extern void BaseAhinvalidatecanvas();
extern struct Iafcanvaspixelguardpage* BaseAhpixelcanvas
(
struct Lafballelementguardinstance Ball_Valueargument
);
#endif
