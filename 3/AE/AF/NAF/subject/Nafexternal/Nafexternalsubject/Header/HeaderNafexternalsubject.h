#define headernafexternalsubject_origin
#ifdef headernafexternalsubject_origin
#include "Nafswitchsubject.c"
#include "Nafplatformsubject.c"
typedef void HeaderNafexternalsubject;
#endif

#define headernafexternalsubject_new
#ifdef headernafexternalsubject_new
#ifdef headernafswitchsubject_switch
#undef headernafplatformsubject_window
#endif
#ifdef headernafplatformsubject_window
#include <Windows.h>
#endif
#endif
