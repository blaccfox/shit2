#define headernafproceduresubject_origin
#ifdef headernafproceduresubject_origin
#include "Nafplatformsubject.c"
#include "Nafwindowsubject.c"
#include "Nafgroundsubject.c"
#include "Naflogsubject.c"
#include "Nafmessagesubject.c"
#include "Nafcanvassubject.c"
#include "Nafrandomsubject.c"
#include "Nafballsubject.c"
#include "Nafwheelsubject.c"
typedef void HeaderNafproceduresubject;
#endif

#define headernafproceduresubject_new
#ifdef headernafproceduresubject_new
static void Windowsetup()
{
	WINBOOL Windowboolean_Value;

	int32_t Width_integerItem, Height_integerEntry;

	Width_integerItem = (int32_t)RectangleElement.right;

	Height_integerEntry = (int32_t)RectangleElement.bottom;

	int32_t Numbernumeralnumeric_integerItem, Numbernumeralnumeric_integerEntry;

	Numbernumeralnumeric_integerItem = 0;

	Numbernumeralnumeric_integerItem = Numbernumeralnumeric_integerItem + 1;

	Numbernumeralnumeric_integerItem = Numbernumeralnumeric_integerItem * Width_integerItem;

	Numbernumeralnumeric_integerItem = Numbernumeralnumeric_integerItem * Height_integerEntry;

	Numbernumeralnumeric_integerItem = Numbernumeralnumeric_integerItem / 8;

	Numbernumeralnumeric_integerEntry
	=
	(
		(
			(
				(
					Width_integerItem
					*
					32
				)
				+
				31
			)
			/
			32
		)
		*
		4
	);

	BITMAP Bitmap_Value;

	Bitmap_Value = (BITMAP){0};

	Bitmap_Value.bmBits = LongpointervoidElement;

	Bitmap_Value.bmBitsPixel = (WORD)32;

	Bitmap_Value.bmHeight = (LONG)Height_integerEntry;

	Bitmap_Value.bmPlanes = (WORD)1;

	Bitmap_Value.bmType = (LONG)0;

	Bitmap_Value.bmWidth = (LONG)Width_integerItem;

	Bitmap_Value.bmWidthBytes = Numbernumeralnumeric_integerEntry;

	HBITMAP Handlebitmap_Value;

	Handlebitmap_Value = CreateBitmap
	(
Bitmap_Value.bmWidth,
Bitmap_Value.bmHeight,
Bitmap_Value.bmPlanes,
Bitmap_Value.bmBitsPixel,
Bitmap_Value.bmBits
	);

	HDC Handlegraphiccontext_Self, Handlegraphiccontext_Other;

	Handlegraphiccontext_Self = GetDC
	(
HandleElement
	);

	Handlegraphiccontext_Other = CreateCompatibleDC
	(
Handlegraphiccontext_Self
	);

	HGDIOBJ Handlegraphicdeviceinterfaceobject_Value;

	Handlegraphicdeviceinterfaceobject_Value = SelectObject
	(
Handlegraphiccontext_Other,
(HGDIOBJ)HandlebitmapElement
	);

	BitmapElement = Bitmap_Value;

	HandlebitmapElement = Handlebitmap_Value;

	DedicateHandledevicecontextElement = Handlegraphiccontext_Self;

	MemoryHandledevicecontextElement = Handlegraphiccontext_Other;

	return;
}
static void Windowsetupoverlay()
{
	WINBOOL Windowboolean_Value;

	int32_t Width_integerItem, Height_integerEntry;

	Width_integerItem = (int32_t)RectangleElement.right;

	Height_integerEntry = (int32_t)RectangleElement.bottom;

	int32_t Numbernumeralnumeric_integerItem, Numbernumeralnumeric_integerEntry;

	Numbernumeralnumeric_integerItem = 0;

	Numbernumeralnumeric_integerItem = Numbernumeralnumeric_integerItem + 1;

	Numbernumeralnumeric_integerItem = Numbernumeralnumeric_integerItem * Width_integerItem;

	Numbernumeralnumeric_integerItem = Numbernumeralnumeric_integerItem * Height_integerEntry;

	Numbernumeralnumeric_integerItem = Numbernumeralnumeric_integerItem / 8;

	Numbernumeralnumeric_integerEntry
	=
	(
		(
			(
				(
					Width_integerItem
					*
					32
				)
				+
				31
			)
			/
			32
		)
		*
		4
	);

	BITMAP Bitmap_Value;

	Bitmap_Value = (BITMAP){0};

	Bitmap_Value.bmBits = OverlayLongpointervoidElement;

	Bitmap_Value.bmBitsPixel = (WORD)32;

	Bitmap_Value.bmHeight = (LONG)Height_integerEntry;

	Bitmap_Value.bmPlanes = (WORD)1;

	Bitmap_Value.bmType = (LONG)0;

	Bitmap_Value.bmWidth = (LONG)Width_integerItem;

	Bitmap_Value.bmWidthBytes = Numbernumeralnumeric_integerEntry;

	HBITMAP Handlebitmap_Value;

	Handlebitmap_Value = CreateBitmap
	(
Bitmap_Value.bmWidth,
Bitmap_Value.bmHeight,
Bitmap_Value.bmPlanes,
Bitmap_Value.bmBitsPixel,
Bitmap_Value.bmBits
	);

	HDC Handlegraphiccontext_Self, Handlegraphiccontext_Other;

	Handlegraphiccontext_Self = GetDC
	(
HandleElement
	);

	Handlegraphiccontext_Other = CreateCompatibleDC
	(
Handlegraphiccontext_Self
	);

	HGDIOBJ Handlegraphicdeviceinterfaceobject_Value;

	Handlegraphicdeviceinterfaceobject_Value = SelectObject
	(
Handlegraphiccontext_Other,
(HGDIOBJ)OverlayHandlebitmapElement
	);

	OverlayBitmapElement = Bitmap_Value;

	OverlayHandlebitmapElement = Handlebitmap_Value;

	OverlaydedicateHandledevicecontextElement = Handlegraphiccontext_Self;

	OverlaymemoryHandledevicecontextElement = Handlegraphiccontext_Other;

	return;
}
static DWORD WINAPI Windowtimeslow
(
LPVOID Longpointervoid_Valueargument
)
{
	DWORD Doubleword_Result = {0};

	DWORD* Doubleword_Valuepointer;

	Doubleword_Valuepointer = &(DWORD){0};

	Doubleword_Result = *Doubleword_Valuepointer;

	return Doubleword_Result;
}
static DWORD WINAPI Windowtimefast
(
LPVOID Longpointervoid_Valueargument
)
{
	DWORD Doubleword_Result = (DWORD){0};

	BaseAhvoidrandomsubject();

	_Bool booleanTemporal, booleanTemporary;

	booleanTemporal = false;

	booleanTemporary = true;

	clock_t Clocktype_Self, Clocktype_Other;

	Clocktype_Self = clock();

	Clocktype_Other = (clock_t){0};

	while (StarthasBooleanElement == false);

	_Bool Should_booleanValueidle;

	Should_booleanValueidle = true;

	do
	{
		_Bool isEqualYes, shouldBreakYes;

		isEqualYes = Should_booleanValueidle == true;

		shouldBreakYes = isEqualYes == false;

		if (shouldBreakYes == true)
		{
			break;
		}
else
false
;
		Clocktype_Other = clock();

		int64_t integerlongValue;

		integerlongValue = 0;

		integerlongValue = integerlongValue + (int64_t)Clocktype_Other;

		integerlongValue = integerlongValue - (int64_t)Clocktype_Self;

		booleanTemporal = booleanTemporary;

		booleanTemporal = booleanTemporal
		&&
		(
			integerlongValue
			>=
			1
		)
==
true
;
		if (booleanTemporal == true)
		{
			BaseAhboundcanvas();

			BaseAhrendercanvas();

			//BaseAhoverlaycanvas();

			BaseAhinvalidatecanvas();

			booleanTemporal = booleanTemporary;

			booleanTemporal = booleanTemporal && GrounddataPointerElement->PauseshouldBooleanElement == false;

			if (booleanTemporal == true)
			{
				break;
			}
else
false
;
			Clocktype_Self = Clocktype_Other;
		}
else
false
;
		continue;
	}
	while (true);

	DWORD* Doubleword_Valuepointer;

	Doubleword_Valuepointer = &(DWORD){0};

	Doubleword_Result = *Doubleword_Valuepointer;

	return Doubleword_Result;
}
static void Windowcentral
(
WPARAM Wordparameter_Itemargument,
LPARAM Longparameter_Entryargument
)
{
	WINBOOL Windowboolean_Temporal;

	_Bool booleanTemporal, booleanTemporary;

	booleanTemporal = false;

	booleanTemporary = true;

	booleanTemporal = booleanTemporary;

	booleanTemporal = booleanTemporal
	&&
	(
		Wordparameter_Itemargument
		==
		headernafmessagesubject_centralshowwindow
	)
==
true
;
	if (booleanTemporal == true)
	{
		StarthasBooleanElement = true;

		BaseAhboundcanvas();

		Windowsetup();

		Windowsetupoverlay();

		BaseAhconfigurecanvas
		(
50,
300
		);

		BaseAhpopulatecanvas();

		BaseAhrendercanvas();

		BaseAhinvalidatecanvas();
	}
else
false
;
	booleanTemporal = booleanTemporary;

	booleanTemporal = booleanTemporal
	&&
	(
		Wordparameter_Itemargument
		==
		headernafmessagesubject_centralpaint
	)
==
true
;
	if (booleanTemporal == true)
	{
		PAINTSTRUCT Paintstructure_Value;

		Paintstructure_Value = (PAINTSTRUCT){0};

		const PAINTSTRUCT* Paintstructure_Constantvaluepointer;

		Paintstructure_Constantvaluepointer = &Paintstructure_Value;

		HDC Handledevicecontext_Value;

		Handledevicecontext_Value = BeginPaint
		(
HandleElement,
(LPPAINTSTRUCT)Paintstructure_Constantvaluepointer
		);

		Windowboolean_Temporal = BitBlt
		(
Handledevicecontext_Value,
0,
0,
RectangleElement.right,
RectangleElement.bottom,
MemoryHandledevicecontextElement,
0, 0,
SRCCOPY
	    );

		Windowboolean_Temporal = BitBlt
		(
Handledevicecontext_Value,
0,
0,
RectangleElement.right,
RectangleElement.bottom,
OverlaymemoryHandledevicecontextElement,
0, 0,
SRCCOPY
	    );

		Windowboolean_Temporal = EndPaint
		(
HandleElement,
Paintstructure_Constantvaluepointer
		);
	}
else
false
;
	booleanTemporal = booleanTemporary;

	booleanTemporal = booleanTemporal
	&&
	(
		Wordparameter_Itemargument
		==
		headernafmessagesubject_centralwordkeydown
	)
==
true
;
	if (booleanTemporal == true)
	{
		booleanTemporal = booleanTemporary;

		booleanTemporal = booleanTemporal
		&&
		(
			Longparameter_Entryargument
			==
			VK_SPACE
		)
==
true
;
		booleanTemporal = booleanTemporal && CanvasdataPointerElement->SpacehasBooleanElement == false;

		if (booleanTemporal == true)
		{
			CanvasdataPointerElement->SpacehasBooleanElement = true;

			BaseLafplatformelementguardinstance
			(
true
			);

			PlatformtemporalVoidpointerElement = (void*)PlatformcorePointerElement;

			PlatformtemporaryVoidpointerElement = (void*)&(struct PoseinformateLafplatformelementguardinstance){0};

			((struct PoseLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->InformatePointerElement = (struct PoseinformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement;

			((struct PoseLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->Pose();

			struct Lafballelementguardinstance Ball_Value;

			Ball_Value = BaseLafballelementguardinstance();

			Ball_Value.XIntegerfloatElement = ((struct PoseLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement->ResultxIntegerElement;

			Ball_Value.YIntegerfloatElement = ((struct PoseLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement->ResultyIntegerElement;

			Ball_Value.RadiusIntegerfloatElement = 100.00F;

			AddLafballelementguardinstance
			(
Ball_Value
			);

			struct Iafcanvaspixelguardpage* Pixel_Valuepointer;

			Pixel_Valuepointer = BaseAhpixelcanvas
			(
Ball_Value
			);

			Pixel_Valuepointer->RedIntegerElement = 255;

			ShowelementLafballelementguardinstance
			(
Ball_Value
			);

			CanvasdataPointerElement->IceBallElement = Ball_Value;
		}
else
false
;
		booleanTemporal = booleanTemporary;

		booleanTemporal = booleanTemporal
		&&
		(
			Longparameter_Entryargument
			==
			VK_ESCAPE
		)
==
true
;
		if (booleanTemporal == true)
		{
		    size_t Sizetype_Value;

		    Sizetype_Value
			=
			(
				(
					(
						(
							BitmapElement.bmWidth
							*
							32
						)
						+
						31
					)
					/
					32
				)
				*
				4
				*
				BitmapElement.bmHeight
			);

		    LPVOID Longpointervoid_Value;

			Longpointervoid_Value = (LPVOID)HeapAlloc
			(
GetProcessHeap(),
(DWORD){0},
(SIZE_T)Sizetype_Value
);

			BITMAPINFO Bitmapinformate_Value;

			Bitmapinformate_Value = (BITMAPINFO){0};

			Bitmapinformate_Value.bmiHeader.biBitCount = (WORD)32;

			Bitmapinformate_Value.bmiHeader.biCompression =  BI_RGB;

			Bitmapinformate_Value.bmiHeader.biHeight = -(BitmapElement.bmHeight);

			Bitmapinformate_Value.bmiHeader.biPlanes = BitmapElement.bmPlanes;

			Bitmapinformate_Value.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);

			Bitmapinformate_Value.bmiHeader.biWidth = BitmapElement.bmWidth;

			int32_t integerValue;

			integerValue = GetDIBits
			(
DedicateHandledevicecontextElement,
HandlebitmapElement,
0,
(UINT)BitmapElement.bmHeight,
Longpointervoid_Value,
&Bitmapinformate_Value,
DIB_RGB_COLORS
			);

		    DWORD bmpSize = BitmapElement.bmWidthBytes * BitmapElement.bmHeight;

		    // Allocate memory for pixel data
		    BYTE* lpPixels = (BYTE*)malloc(bmpSize);

		    // Initialize a BITMAPINFO structure
		    BITMAPINFO bmpInfo = {0};
		    bmpInfo.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
		    bmpInfo.bmiHeader.biWidth = BitmapElement.bmWidth;
		    bmpInfo.bmiHeader.biHeight = -BitmapElement.bmHeight; // Negative for top-down DIB
		    bmpInfo.bmiHeader.biPlanes = 1;
		    bmpInfo.bmiHeader.biBitCount = 32;
		    bmpInfo.bmiHeader.biCompression = BI_RGB;


		    // Get the pixel data from the HBITMAP
		    if (!GetDIBits(MemoryHandledevicecontextElement, HandlebitmapElement, 0, BitmapElement.bmHeight, lpPixels, &bmpInfo, DIB_RGB_COLORS))
		    {
		        free(lpPixels);
		    }

		    // Prepare BMP file headers
		    BITMAPFILEHEADER fileHeader = {0};
		    fileHeader.bfType = 0x4D42; // 'BM'
		    fileHeader.bfOffBits = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);
		    fileHeader.bfSize = fileHeader.bfOffBits + bmpSize;

		    // Open file for writing
		    FILE* fp = fopen("C:\\Users\\blacc\\eclipse-workspace\\0429202508351020101\\2\\example.bmp", "wb");
		    if (!fp)
		    {
		        free(lpPixels);
		    }

		    // Write headers and data
		    fwrite(&fileHeader, sizeof(BITMAPFILEHEADER), 1, fp);
		    fwrite(&bmpInfo.bmiHeader, sizeof(BITMAPINFOHEADER), 1, fp);
		    fwrite(lpPixels, bmpSize, 1, fp);

		    fclose(fp);
		    free(lpPixels);

			DestroyWindow
			(
HandleElement
			);
		}
else
false
;
	}
else
false
;
	booleanTemporal = booleanTemporary;

	booleanTemporal = booleanTemporal
	&&
	(
		Wordparameter_Itemargument
		==
		headernafmessagesubject_centralwordkeyup
	)
==
true
;
	if (booleanTemporal == true)
	{
		booleanTemporal = booleanTemporary;

		booleanTemporal = booleanTemporal
		&&
		(
			Longparameter_Entryargument
			==
			VK_SPACE
		)
==
true
;
		if (booleanTemporal == true)
		{
			CanvasdataPointerElement->SpacehasBooleanElement = false;

			BaseLafplatformelementguardinstance
			(
true
			);

			PlatformtemporalVoidpointerElement = (void*)PlatformcorePointerElement;

			PlatformtemporaryVoidpointerElement = (void*)&(struct PoseinformateLafplatformelementguardinstance){0};

			((struct PoseLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->InformatePointerElement = (struct PoseinformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement;

			((struct PoseLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->Pose();

			struct Lafballelementguardinstance Ball_Value;

			Ball_Value = BaseLafballelementguardinstance();

			Ball_Value.XIntegerfloatElement = ((struct PoseLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement->ResultxIntegerElement;

			Ball_Value.YIntegerfloatElement = ((struct PoseLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement->ResultyIntegerElement;

			CanvasdataPointerElement->FreezeBallElement = Ball_Value;

			BaseLafwheelelementguardinstance
			(
true
			);

			WheelcorePointerElement->Calibrate();

			WheelcorePointerElement->Spiral
			(
0.10F,
0.10F,
CanvasdataPointerElement->IceBallElement,
CanvasdataPointerElement->FreezeBallElement
			);

			struct NormalLafwheelelementguardinstance Normal_Value;

			Normal_Value = (struct NormalLafwheelelementguardinstance){0};

			struct NormalLafwheelelementguardinstance* Normal_Valuepointer;

			Normal_Valuepointer = &Normal_Value;

			WheelcorePointerElement->Normal
			(
Normal_Valuepointer
			);

			ShowLafwheelelementguardinstance
			(
*WheelcorePointerElement
			);

			ShowNormalLafwheelelementguardinstance
			(
Normal_Value
			);

			float_t integerfloatValue;

			integerfloatValue = 0.00F;

			int32_t integerCap, integerCount;

			integerCap = 0;

			integerCount = 0;

			integerCount = integerCount + 10;

			do
			{
				integerfloatValue = integerfloatValue + 5.00F;

				_Bool isEqualYes, shouldBreakYes;

				isEqualYes =
				(
					integerCount
					==
					integerCap
				)
==
true
;
				shouldBreakYes = isEqualYes == true;

				if (shouldBreakYes == true)
				{
					break;
				}
else
false
;
				float_t integerfloatItem, integerfloatEntry;

				integerfloatItem
				=
				(
					(
						integerfloatValue
						*
						Normal_Value.XIntegerfloatElement
					)
					+
					CanvasdataPointerElement->IceBallElement.XIntegerfloatElement
				);

				integerfloatEntry
				=
				(
					(
						integerfloatValue
						*
						Normal_Value.YIntegerfloatElement
					)
					+
					CanvasdataPointerElement->IceBallElement.YIntegerfloatElement
				);

				struct Lafballelementguardinstance Ball_Value;

				Ball_Value = (struct Lafballelementguardinstance){0};

				Ball_Value.XIntegerfloatElement = integerfloatItem;

				Ball_Value.YIntegerfloatElement = integerfloatEntry;

				struct Iafcanvaspixelguardpage* Pixel_Valuepointer;

				Pixel_Valuepointer = BaseAhpixelcanvas
				(
Ball_Value
				);

				Pixel_Valuepointer->RedIntegerElement = 255;

				Pixel_Valuepointer->GreenIntegerElement = 255;

				Pixel_Valuepointer->BlueIntegerElement = 255;

				BaseAhvoidlogsubject("\n<%i, %i>", Pixel_Valuepointer->XIntegerElement, Pixel_Valuepointer->YIntegerElement);

				integerCap = integerCap + 1;

				continue;
			}
			while (true);
		}
else
false
;
	}
else
false
;
	return;
}
static void Windowloop()
{
	WINBOOL Windowboolean_Temporal;

	MSG Message_Value;

	Message_Value = (MSG){0};

	const MSG* Message_Constantvaluepointer;

	Message_Constantvaluepointer = &Message_Value;

	_Bool Should_booleanValueidle;

	Should_booleanValueidle = true;

	do
	{
		_Bool isEqualYes, shouldBreakYes;

		isEqualYes = Should_booleanValueidle == true;

		shouldBreakYes = isEqualYes == false;

		if (shouldBreakYes == true)
		{
			break;
		}
else
false
;
		Windowboolean_Temporal = GetMessageA
		(
(LPMSG)Message_Constantvaluepointer,
HandleElement,
(UINT){0},
(UINT){0}
		);

		_Bool isEqualAnsweryes;

		isEqualAnsweryes = Windowboolean_Temporal == true;

		if (isEqualAnsweryes)
		{
			Windowboolean_Temporal = TranslateMessage
			(
Message_Constantvaluepointer
			);

			LRESULT Longresult_Value;

			Longresult_Value = DispatchMessageA
			(
Message_Constantvaluepointer
			);
		}
		else
		{
			Should_booleanValueidle = false;

			continue;
		}

		continue;
	}
	while (true);

	GrounddataPointerElement->PauseshouldBooleanElement = false;

	return;
}
static LRESULT CALLBACK Windowprocedure
(
HWND Handle_Selfargument,
UINT Signnotinteger_Otherargument,
WPARAM Wordparameter_Itemargument,
LPARAM Longparameter_Entryargument
)
{
	LRESULT Longresult_Result = (LRESULT){0};

	switch (Signnotinteger_Otherargument)
	{
		case headernafmessagesubject_central:
			Windowcentral
			(
Wordparameter_Itemargument,
Longparameter_Entryargument
			);
			break;

		case WM_SHOWWINDOW:
			Windowcentral
			(
(WPARAM)headernafmessagesubject_centralshowwindow,
Longparameter_Entryargument
			);
			break;

		case WM_PAINT:
			Windowcentral
			(
(WPARAM)headernafmessagesubject_centralpaint,
Longparameter_Entryargument
			);
			break;

		case WM_KEYDOWN:
			Windowcentral
			(
(WPARAM)headernafmessagesubject_centralwordkeydown,
(LPARAM)Wordparameter_Itemargument
			);
			Windowcentral
			(
(WPARAM)headernafmessagesubject_centrallongkeydown,
Longparameter_Entryargument
			);
			break;

		case WM_KEYUP:
			Windowcentral
			(
(WPARAM)headernafmessagesubject_centralwordkeyup,
(LPARAM)Wordparameter_Itemargument
			);
			Windowcentral
			(
(WPARAM)headernafmessagesubject_centrallongkeyup,
Longparameter_Entryargument
			);
			break;

		default:
			break;
	}
	LRESULT Longresult_Value;

	Longresult_Value = DefWindowProcA
	(
Handle_Selfargument,
Signnotinteger_Otherargument,
Wordparameter_Itemargument,
Longparameter_Entryargument
	);

	Longresult_Result = Longresult_Value;

	return Longresult_Result;
}
static DWORD WINAPI Windowapplicate
(
LPVOID Longpointervoid_Valueargument
)
{
	WINBOOL Windowboolean_Temporal;

	struct SpawninformateLafwindowelementguardinstance Informate_Value;

	Informate_Value = *(struct SpawninformateLafwindowelementguardinstance*)Longpointervoid_Valueargument;

	DWORD Doubleword_Result = (DWORD){0};

	WNDCLASSEXA Windowclassextenda_Value;

	Windowclassextenda_Value = (WNDCLASSEXA){0};

	Windowclassextenda_Value.lpszClassName = (LPCSTR)Informate_Value.SetTitleObjectConstantsignnotintegerbytepointerSubjectStringElement;

	Windowclassextenda_Value.lpfnWndProc = (WNDPROC)Windowprocedure;

	Windowclassextenda_Value.cbSize = (UINT)sizeof(WNDCLASSEXA);

	const WNDCLASSEXA* Windowclassextenda_Constantvaluepointer;

	Windowclassextenda_Constantvaluepointer = &Windowclassextenda_Value;

	RegisterClassExA
	(
Windowclassextenda_Constantvaluepointer
	);

	int32_t Width_integerItem, Height_integerEntry;

	Width_integerItem = GetSystemMetrics
	(
SM_CXSCREEN
	);

	Height_integerEntry = GetSystemMetrics
	(
SM_CYSCREEN
	);

	float X_integerfloatCap, Y_integerfloatCount, Width_integerfloatSize, Height_integerfloatLength;

	X_integerfloatCap = 0.00F;

	X_integerfloatCap = X_integerfloatCap + 1.00F;

	X_integerfloatCap = X_integerfloatCap * (float)Width_integerItem;

	X_integerfloatCap = X_integerfloatCap * Informate_Value.XIntegerfloatElement;

	Y_integerfloatCount = 0.00F;

	Y_integerfloatCount = Y_integerfloatCount + 1.00F;

	Y_integerfloatCount = Y_integerfloatCount * (float)Height_integerEntry;

	Y_integerfloatCount = Y_integerfloatCount * Informate_Value.YIntegerfloatElement;

	Width_integerfloatSize
	=
	(
		(
			Informate_Value.UIntegerfloatElement
			-
			Informate_Value.XIntegerfloatElement
		)
		*
		(float)Width_integerItem
	);

	Height_integerfloatLength
	=
	(
		(
			Informate_Value.VIntegerfloatElement
			-
			Informate_Value.YIntegerfloatElement
		)
		*
		(float)Height_integerEntry
	);

	HWND Handle_Value;

	Handle_Value = CreateWindowExA
	(
(DWORD){0},
(LPCSTR)Informate_Value.SetTitleObjectConstantsignnotintegerbytepointerSubjectStringElement,
(LPCSTR)Informate_Value.SetTitleObjectConstantsignnotintegerbytepointerSubjectStringElement,
WS_OVERLAPPEDWINDOW,
(int32_t)X_integerfloatCap,
(int32_t)Y_integerfloatCount,
(int32_t)Width_integerfloatSize,
(int32_t)Height_integerfloatLength,
(HWND){0},
(HMENU){0},
(HINSTANCE){0},
(LPVOID){0}
	);

	HandleElement = Handle_Value;

	Windowboolean_Temporal = ShowWindow
	(
Handle_Value,
SW_SHOW
	);

	Windowboolean_Temporal = UpdateWindow
	(
Handle_Value
	);

	Windowloop();

	DWORD Doubleword_Value;

	Doubleword_Result = Doubleword_Value;

	return Doubleword_Result;
}
static void Windowinitialize
(
struct InitializeinformateLafwindowelementguardinstance* Informate_Valuepointerargument
)
{
	size_t Sizetype_Self, Sizetype_Other;

	Sizetype_Self
	=
	(
		sizeof
		(
struct Lafballelementguardinstance
		)
		*
		1
	);

	Sizetype_Other
	=
	(
		sizeof
		(
struct Lafballelementguardinstance
		)
		*
		1
	);

	BaseLafplatformelementguardinstance
	(
true
	);

	PlatformtemporalVoidpointerElement = (void*)PlatformcorePointerElement;

	PlatformtemporaryVoidpointerElement = (void*)&(struct AllocateinformateLafplatformelementguardinstance*){0};

	((struct AllocateinformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement)->SizetypeElement = (SIZE_T)Sizetype_Self;

	((struct AllocateLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->InformatePointerElement = (struct AllocateinformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement;

	((struct AllocateLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->Allocate();

	SetBallPointer = (struct Lafballelementguardinstance*)((struct AllocateLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement->ResultLongpointervoidElement;

	BaseLafplatformelementguardinstance
	(
true
	);

	PlatformtemporalVoidpointerElement = (void*)PlatformcorePointerElement;

	PlatformtemporaryVoidpointerElement = (void*)&(struct AllocateinformateLafplatformelementguardinstance*){0};

	((struct AllocateinformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement)->SizetypeElement = (SIZE_T)Sizetype_Other;

	((struct AllocateLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->InformatePointerElement = (struct AllocateinformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement;

	((struct AllocateLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->Allocate();

	SetCloneBallPointer = (struct Lafballelementguardinstance*)((struct AllocateLafplatformelementguardinstance*)PlatformcorePointerElement)->InformatePointerElement->ResultLongpointervoidElement;

	BaseAhvoidlogsubject("initialize");

	return;
}
static void Windowmain
(
struct MaininformateLafwindowelementguardinstance* Informate_Valuepointerargument
)
{
	BaseLafplatformelementguardinstance
	(
true
	);

	PlatformtemporalVoidpointerElement = (void*)PlatformcorePointerElement;

	PlatformtemporaryVoidpointerElement = (void*)&(struct InitializeinformateLafplatformelementguardinstance*){0};

	((struct InitializeLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->InformatePointerElement = (struct InitializeinformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement;

	((struct InitializeLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->Initialize();

	BaseLafplatformelementguardinstance
	(
true
	);

	PlatformtemporalVoidpointerElement = (void*)PlatformcorePointerElement;

	PlatformtemporaryVoidpointerElement = (void*)&(struct SpawninformateLafplatformelementguardinstance){0};

	((struct SpawninformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement)->SetTitleObjectConstantsignnotintegerbytepointerSubjectStringElement = "Mywin";

	((struct SpawninformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement)->XIntegerfloatElement = 0.25F;

	((struct SpawninformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement)->YIntegerfloatElement = 0.25F;

	((struct SpawninformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement)->UIntegerfloatElement = 0.75F;

	((struct SpawninformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement)->VIntegerfloatElement = 0.75F;

	((struct SpawnLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->InformatePointerElement = (struct SpawninformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement;

	((struct SpawnLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->Spawn();

	BaseLafplatformelementguardinstance
	(
true
	);

	PlatformtemporalVoidpointerElement = (void*)PlatformcorePointerElement;

	PlatformtemporaryVoidpointerElement = (void*)&(struct ThreadinformateLafplatformelementguardinstance){0};

	((struct ThreadinformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement)->LongpointerthreadstartroutineElement = (LPTHREAD_START_ROUTINE)Windowtimefast;

	((struct ThreadLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->InformatePointerElement = (struct ThreadinformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement;

	((struct ThreadLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->Thread();

	BaseLafplatformelementguardinstance
	(
true
	);

	PlatformtemporalVoidpointerElement = (void*)PlatformcorePointerElement;

	PlatformtemporaryVoidpointerElement = (void*)&(struct ThreadinformateLafplatformelementguardinstance){0};

	((struct ThreadinformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement)->LongpointerthreadstartroutineElement = (LPTHREAD_START_ROUTINE)Windowtimeslow;

	((struct ThreadLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->InformatePointerElement = (struct ThreadinformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement;

	((struct ThreadLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->Thread();

	BaseLafplatformelementguardinstance
	(
true
	);

	PlatformtemporalVoidpointerElement = (void*)PlatformcorePointerElement;

	PlatformtemporaryVoidpointerElement = (void*)&(struct FinalizeinformateLafplatformelementguardinstance*){0};

	((struct FinalizeLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->InformatePointerElement = (struct FinalizeinformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement;

	((struct FinalizeLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->Finalize();

	BaseAhvoidlogsubject("main");

	return;
}
static void Windowfinalize
(
struct FinalizeinformateLafwindowelementguardinstance* Informate_Valuepointerargument
)
{
	BaseAhdisposecanvas();

	BaseAhvoidlogsubject("finalize");

	return;
}
static void Windowallocate
(
struct AllocateinformateLafwindowelementguardinstance* Informate_Valuepointerargument
)
{
	HANDLE Handle_Value;

	Handle_Value = GetProcessHeap();

	LPVOID Longpointervoid_Value;

	Longpointervoid_Value = HeapAlloc
	(
Handle_Value,
(DWORD){0},
Informate_Valuepointerargument->SizetypeElement
	);

	Informate_Valuepointerargument->ResultLongpointervoidElement = Longpointervoid_Value;

	return;
}
static void Windowthread
(
struct ThreadinformateLafwindowelementguardinstance* Informate_Valuepointerargument
)
{
	HANDLE Handle_Value;

	Handle_Value = CreateThread
	(
(LPSECURITY_ATTRIBUTES){0},
(SIZE_T){0},
Informate_Valuepointerargument->LongpointerthreadstartroutineElement,
Informate_Valuepointerargument->LongpointervoidElement,
(DWORD){0},
(LPDWORD){0}
	);

	Informate_Valuepointerargument->ResultHandleElement = Handle_Value;

	return;
}
static void Windowspawn
(
struct SpawninformateLafwindowelementguardinstance* Informate_Valuepointerargument
)
{
	BaseLafplatformelementguardinstance
	(
true
	);

	PlatformtemporalVoidpointerElement = (void*)PlatformcorePointerElement;

	PlatformtemporaryVoidpointerElement = (void*)&(struct ThreadinformateLafplatformelementguardinstance){0};

	((struct ThreadinformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement)->LongpointerthreadstartroutineElement = (LPTHREAD_START_ROUTINE)Windowapplicate;

	((struct ThreadinformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement)->LongpointervoidElement = (LPVOID)Informate_Valuepointerargument;

	((struct ThreadLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->InformatePointerElement = (struct ThreadinformateLafplatformelementguardinstance*)PlatformtemporaryVoidpointerElement;

	((struct ThreadLafplatformelementguardinstance*)PlatformtemporalVoidpointerElement)->Thread();

	return;
}
static void Windowpose
(
struct PoseinformateLafwindowelementguardinstance* Informate_Valuepointer
)
{
	WINBOOL WindowbooleanTemporal;

	POINT Point_Value;

	Point_Value = (POINT){0};

	const POINT* Point_Constantvaluepointer;

	Point_Constantvaluepointer = &Point_Value;

	WindowbooleanTemporal = GetCursorPos
	(
Point_Constantvaluepointer
	);

	WindowbooleanTemporal = ScreenToClient
	(
HandleElement,
Point_Constantvaluepointer
	);

	Informate_Valuepointer->ResultxIntegerElement = (int32_t)Point_Constantvaluepointer->x;

	Informate_Valuepointer->ResultyIntegerElement = (int32_t)Point_Constantvaluepointer->y;

	return;
}
#endif
