#if !defined(__LP64__) && !defined(MAC_OS_X_VERSION_10_7)
#define PyMac_PRECHECK(rtn) do  while(0)
extern PyObject *_GrafObj_New(GrafPtr);
extern int _GrafObj_Convert(PyObject *, GrafPtr *);
extern PyObject *_BMObj_New(BitMapPtr);
extern int _BMObj_Convert(PyObject *, BitMapPtr *);
extern PyObject *_QdRGB_New(RGBColorPtr);
extern int _QdRGB_Convert(PyObject *, RGBColorPtr);
#define GrafObj_New _GrafObj_New
#define GrafObj_Convert _GrafObj_Convert
#define BMObj_New _BMObj_New
#define BMObj_Convert _BMObj_Convert
#define QdRGB_New _QdRGB_New
#define QdRGB_Convert _QdRGB_Convert
static PyObject *BMObj_NewCopied(BitMapPtr);
PyObject *QdRGB_New(RGBColorPtr itself)
int QdRGB_Convert(PyObject *v, RGBColorPtr p_itself)
static
PyObject *QdFI_New(FontInfo *itself)
static PyObject *Qd_Error;
PyTypeObject GrafPort_Type;
#define GrafObj_Check(x) ((x)->ob_type == &GrafPort_Type || PyObject_TypeCheck((x), &GrafPort_Type))
typedef struct GrafPortObject  GrafPortObject;
PyObject *GrafObj_New(GrafPtr itself)
int GrafObj_Convert(PyObject *v, GrafPtr *p_itself)
static void GrafObj_dealloc(GrafPortObject *self)
static PyObject *GrafObj_MacSetPort(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_QDSwapPort(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_IsValidPort(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortPixMap(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortBitMapForCopyBits(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortBounds(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortForeColor(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortBackColor(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortOpColor(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortHiliteColor(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortTextFont(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortTextFace(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortTextMode(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortTextSize(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortChExtra(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortFracHPenLocation(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortSpExtra(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortPenVisibility(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortVisibleRegion(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortClipRegion(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortBackPixPat(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortPenPixPat(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortFillPixPat(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortPenSize(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortPenMode(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_GetPortPenLocation(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_IsPortRegionBeingDefined(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_IsPortPictureBeingDefined(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_IsPortPolyBeingDefined(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_IsPortOffscreen(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_IsPortColor(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_IsPortVisibleRegionEmpty(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_IsPortClipRegionEmpty(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_SectRegionWithPortClipRegion(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_SectRegionWithPortVisibleRegion(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_SwapPortPicSaveHandle(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_SwapPortPolySaveHandle(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_SwapPortRegionSaveHandle(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_SetPortBounds(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_SetPortOpColor(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_SetPortTextFont(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_SetPortTextSize(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_SetPortTextFace(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_SetPortTextMode(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_SetPortVisibleRegion(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_SetPortClipRegion(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_SetPortPenPixPat(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_SetPortFillPixPat(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_SetPortBackPixPat(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_SetPortPenSize(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_SetPortPenMode(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_SetPortFracHPenLocation(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_DisposePort(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_QDLocalToGlobalPoint(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_QDGlobalToLocalPoint(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_QDLocalToGlobalRect(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_QDGlobalToLocalRect(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_QDLocalToGlobalRegion(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_QDGlobalToLocalRegion(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_QDIsPortBuffered(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_QDIsPortBufferDirty(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_QDFlushPortBuffer(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_QDGetDirtyRegion(GrafPortObject *_self, PyObject *_args)
static PyObject *GrafObj_QDSetDirtyRegion(GrafPortObject *_self, PyObject *_args)
static PyMethodDef GrafObj_methods[] = ;
static PyObject *GrafObj_get_visRgn(GrafPortObject *self, void *closure)
#define GrafObj_set_visRgn NULL
static PyObject *GrafObj_get_clipRgn(GrafPortObject *self, void *closure)
#define GrafObj_set_clipRgn NULL
static PyGetSetDef GrafObj_getsetlist[] = ;
#define GrafObj_compare NULL
#define GrafObj_repr NULL
#define GrafObj_hash NULL
#define GrafObj_tp_init 0
#define GrafObj_tp_alloc PyType_GenericAlloc
static PyObject *GrafObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define GrafObj_tp_free PyObject_Del
PyTypeObject GrafPort_Type = ;
PyTypeObject BitMap_Type;
#define BMObj_Check(x) ((x)->ob_type == &BitMap_Type || PyObject_TypeCheck((x), &BitMap_Type))
typedef struct BitMapObject  BitMapObject;
PyObject *BMObj_New(BitMapPtr itself)
int BMObj_Convert(PyObject *v, BitMapPtr *p_itself)
static void BMObj_dealloc(BitMapObject *self)
static PyObject *BMObj_getdata(BitMapObject *_self, PyObject *_args)
static PyObject *BMObj_putdata(BitMapObject *_self, PyObject *_args)
static PyMethodDef BMObj_methods[] = ;
static PyObject *BMObj_get_baseAddr(BitMapObject *self, void *closure)
#define BMObj_set_baseAddr NULL
static PyObject *BMObj_get_rowBytes(BitMapObject *self, void *closure)
#define BMObj_set_rowBytes NULL
static PyObject *BMObj_get_bounds(BitMapObject *self, void *closure)
#define BMObj_set_bounds NULL
static PyObject *BMObj_get_bitmap_data(BitMapObject *self, void *closure)
#define BMObj_set_bitmap_data NULL
static PyObject *BMObj_get_pixmap_data(BitMapObject *self, void *closure)
#define BMObj_set_pixmap_data NULL
static PyGetSetDef BMObj_getsetlist[] = ;
#define BMObj_compare NULL
#define BMObj_repr NULL
#define BMObj_hash NULL
#define BMObj_tp_init 0
#define BMObj_tp_alloc PyType_GenericAlloc
static PyObject *BMObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define BMObj_tp_free PyObject_Del
PyTypeObject BitMap_Type = ;
static PyObject *Qd_GetPort(PyObject *_self, PyObject *_args)
static PyObject *Qd_GrafDevice(PyObject *_self, PyObject *_args)
static PyObject *Qd_SetPortBits(PyObject *_self, PyObject *_args)
static PyObject *Qd_PortSize(PyObject *_self, PyObject *_args)
static PyObject *Qd_MovePortTo(PyObject *_self, PyObject *_args)
static PyObject *Qd_SetOrigin(PyObject *_self, PyObject *_args)
static PyObject *Qd_SetClip(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetClip(PyObject *_self, PyObject *_args)
static PyObject *Qd_ClipRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_BackPat(PyObject *_self, PyObject *_args)
static PyObject *Qd_InitCursor(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacSetCursor(PyObject *_self, PyObject *_args)
static PyObject *Qd_HideCursor(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacShowCursor(PyObject *_self, PyObject *_args)
static PyObject *Qd_ObscureCursor(PyObject *_self, PyObject *_args)
static PyObject *Qd_HidePen(PyObject *_self, PyObject *_args)
static PyObject *Qd_ShowPen(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetPen(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetPenState(PyObject *_self, PyObject *_args)
static PyObject *Qd_SetPenState(PyObject *_self, PyObject *_args)
static PyObject *Qd_PenSize(PyObject *_self, PyObject *_args)
static PyObject *Qd_PenMode(PyObject *_self, PyObject *_args)
static PyObject *Qd_PenPat(PyObject *_self, PyObject *_args)
static PyObject *Qd_PenNormal(PyObject *_self, PyObject *_args)
static PyObject *Qd_MoveTo(PyObject *_self, PyObject *_args)
static PyObject *Qd_Move(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacLineTo(PyObject *_self, PyObject *_args)
static PyObject *Qd_Line(PyObject *_self, PyObject *_args)
static PyObject *Qd_ForeColor(PyObject *_self, PyObject *_args)
static PyObject *Qd_BackColor(PyObject *_self, PyObject *_args)
static PyObject *Qd_ColorBit(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacSetRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacOffsetRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacInsetRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_SectRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacUnionRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacEqualRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_EmptyRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacFrameRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_PaintRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_EraseRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacInvertRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacFillRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_FrameOval(PyObject *_self, PyObject *_args)
static PyObject *Qd_PaintOval(PyObject *_self, PyObject *_args)
static PyObject *Qd_EraseOval(PyObject *_self, PyObject *_args)
static PyObject *Qd_InvertOval(PyObject *_self, PyObject *_args)
static PyObject *Qd_FillOval(PyObject *_self, PyObject *_args)
static PyObject *Qd_FrameRoundRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_PaintRoundRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_EraseRoundRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_InvertRoundRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_FillRoundRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_FrameArc(PyObject *_self, PyObject *_args)
static PyObject *Qd_PaintArc(PyObject *_self, PyObject *_args)
static PyObject *Qd_EraseArc(PyObject *_self, PyObject *_args)
static PyObject *Qd_InvertArc(PyObject *_self, PyObject *_args)
static PyObject *Qd_FillArc(PyObject *_self, PyObject *_args)
static PyObject *Qd_NewRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_OpenRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_CloseRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_BitMapToRegion(PyObject *_self, PyObject *_args)
static PyObject *Qd_RgnToHandle(PyObject *_self, PyObject *_args)
static PyObject *Qd_DisposeRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacCopyRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_SetEmptyRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacSetRectRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_RectRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacOffsetRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_InsetRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_SectRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacUnionRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_DiffRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacXorRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_RectInRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacEqualRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_EmptyRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacFrameRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacPaintRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_EraseRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacInvertRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacFillRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_ScrollRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_CopyBits(PyObject *_self, PyObject *_args)
static PyObject *Qd_CopyMask(PyObject *_self, PyObject *_args)
static PyObject *Qd_OpenPicture(PyObject *_self, PyObject *_args)
static PyObject *Qd_PicComment(PyObject *_self, PyObject *_args)
static PyObject *Qd_ClosePicture(PyObject *_self, PyObject *_args)
static PyObject *Qd_DrawPicture(PyObject *_self, PyObject *_args)
static PyObject *Qd_KillPicture(PyObject *_self, PyObject *_args)
static PyObject *Qd_OpenPoly(PyObject *_self, PyObject *_args)
static PyObject *Qd_ClosePoly(PyObject *_self, PyObject *_args)
static PyObject *Qd_KillPoly(PyObject *_self, PyObject *_args)
static PyObject *Qd_OffsetPoly(PyObject *_self, PyObject *_args)
static PyObject *Qd_FramePoly(PyObject *_self, PyObject *_args)
static PyObject *Qd_PaintPoly(PyObject *_self, PyObject *_args)
static PyObject *Qd_ErasePoly(PyObject *_self, PyObject *_args)
static PyObject *Qd_InvertPoly(PyObject *_self, PyObject *_args)
static PyObject *Qd_FillPoly(PyObject *_self, PyObject *_args)
static PyObject *Qd_SetPt(PyObject *_self, PyObject *_args)
static PyObject *Qd_LocalToGlobal(PyObject *_self, PyObject *_args)
static PyObject *Qd_GlobalToLocal(PyObject *_self, PyObject *_args)
static PyObject *Qd_Random(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacGetPixel(PyObject *_self, PyObject *_args)
static PyObject *Qd_ScalePt(PyObject *_self, PyObject *_args)
static PyObject *Qd_MapPt(PyObject *_self, PyObject *_args)
static PyObject *Qd_MapRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_MapRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_MapPoly(PyObject *_self, PyObject *_args)
static PyObject *Qd_StdBits(PyObject *_self, PyObject *_args)
static PyObject *Qd_AddPt(PyObject *_self, PyObject *_args)
static PyObject *Qd_EqualPt(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacPtInRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_Pt2Rect(PyObject *_self, PyObject *_args)
static PyObject *Qd_PtToAngle(PyObject *_self, PyObject *_args)
static PyObject *Qd_SubPt(PyObject *_self, PyObject *_args)
static PyObject *Qd_PtInRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_NewPixMap(PyObject *_self, PyObject *_args)
static PyObject *Qd_DisposePixMap(PyObject *_self, PyObject *_args)
static PyObject *Qd_CopyPixMap(PyObject *_self, PyObject *_args)
static PyObject *Qd_NewPixPat(PyObject *_self, PyObject *_args)
static PyObject *Qd_DisposePixPat(PyObject *_self, PyObject *_args)
static PyObject *Qd_CopyPixPat(PyObject *_self, PyObject *_args)
static PyObject *Qd_PenPixPat(PyObject *_self, PyObject *_args)
static PyObject *Qd_BackPixPat(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetPixPat(PyObject *_self, PyObject *_args)
static PyObject *Qd_MakeRGBPat(PyObject *_self, PyObject *_args)
static PyObject *Qd_FillCRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_FillCOval(PyObject *_self, PyObject *_args)
static PyObject *Qd_FillCRoundRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_FillCArc(PyObject *_self, PyObject *_args)
static PyObject *Qd_FillCRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_FillCPoly(PyObject *_self, PyObject *_args)
static PyObject *Qd_RGBForeColor(PyObject *_self, PyObject *_args)
static PyObject *Qd_RGBBackColor(PyObject *_self, PyObject *_args)
static PyObject *Qd_SetCPixel(PyObject *_self, PyObject *_args)
static PyObject *Qd_SetPortPix(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetCPixel(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetForeColor(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetBackColor(PyObject *_self, PyObject *_args)
static PyObject *Qd_OpColor(PyObject *_self, PyObject *_args)
static PyObject *Qd_HiliteColor(PyObject *_self, PyObject *_args)
static PyObject *Qd_DisposeCTable(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetCTable(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetCCursor(PyObject *_self, PyObject *_args)
static PyObject *Qd_SetCCursor(PyObject *_self, PyObject *_args)
static PyObject *Qd_AllocCursor(PyObject *_self, PyObject *_args)
static PyObject *Qd_DisposeCCursor(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetMaxDevice(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetCTSeed(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetDeviceList(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetMainDevice(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetNextDevice(PyObject *_self, PyObject *_args)
static PyObject *Qd_TestDeviceAttribute(PyObject *_self, PyObject *_args)
static PyObject *Qd_SetDeviceAttribute(PyObject *_self, PyObject *_args)
static PyObject *Qd_InitGDevice(PyObject *_self, PyObject *_args)
static PyObject *Qd_NewGDevice(PyObject *_self, PyObject *_args)
static PyObject *Qd_DisposeGDevice(PyObject *_self, PyObject *_args)
static PyObject *Qd_SetGDevice(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetGDevice(PyObject *_self, PyObject *_args)
static PyObject *Qd_Color2Index(PyObject *_self, PyObject *_args)
static PyObject *Qd_Index2Color(PyObject *_self, PyObject *_args)
static PyObject *Qd_InvertColor(PyObject *_self, PyObject *_args)
static PyObject *Qd_RealColor(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetSubTable(PyObject *_self, PyObject *_args)
static PyObject *Qd_MakeITable(PyObject *_self, PyObject *_args)
static PyObject *Qd_SetClientID(PyObject *_self, PyObject *_args)
static PyObject *Qd_ProtectEntry(PyObject *_self, PyObject *_args)
static PyObject *Qd_ReserveEntry(PyObject *_self, PyObject *_args)
static PyObject *Qd_QDError(PyObject *_self, PyObject *_args)
static PyObject *Qd_CopyDeepMask(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetPattern(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacGetCursor(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetPicture(PyObject *_self, PyObject *_args)
static PyObject *Qd_DeltaPoint(PyObject *_self, PyObject *_args)
static PyObject *Qd_ShieldCursor(PyObject *_self, PyObject *_args)
static PyObject *Qd_ScreenRes(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetIndPattern(PyObject *_self, PyObject *_args)
static PyObject *Qd_SlopeFromAngle(PyObject *_self, PyObject *_args)
static PyObject *Qd_AngleFromSlope(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetPixBounds(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetPixDepth(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetQDGlobalsRandomSeed(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetQDGlobalsScreenBits(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetQDGlobalsArrow(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetQDGlobalsDarkGray(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetQDGlobalsLightGray(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetQDGlobalsGray(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetQDGlobalsBlack(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetQDGlobalsWhite(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetQDGlobalsThePort(PyObject *_self, PyObject *_args)
static PyObject *Qd_SetQDGlobalsRandomSeed(PyObject *_self, PyObject *_args)
static PyObject *Qd_SetQDGlobalsArrow(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetRegionBounds(PyObject *_self, PyObject *_args)
static PyObject *Qd_IsRegionRectangular(PyObject *_self, PyObject *_args)
static PyObject *Qd_CreateNewPort(PyObject *_self, PyObject *_args)
static PyObject *Qd_SetQDError(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMGetScrVRes(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMSetScrVRes(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMGetScrHRes(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMSetScrHRes(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMGetMainDevice(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMSetMainDevice(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMGetDeviceList(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMSetDeviceList(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMGetQDColors(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMSetQDColors(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMGetWidthListHand(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMSetWidthListHand(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMGetHiliteMode(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMSetHiliteMode(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMGetWidthTabHandle(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMSetWidthTabHandle(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMGetLastSPExtra(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMSetLastSPExtra(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMGetLastFOND(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMSetLastFOND(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMGetFractEnable(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMSetFractEnable(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMGetTheGDevice(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMSetTheGDevice(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMGetHiliteRGB(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMSetHiliteRGB(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMGetCursorNew(PyObject *_self, PyObject *_args)
static PyObject *Qd_LMSetCursorNew(PyObject *_self, PyObject *_args)
static PyObject *Qd_TextFont(PyObject *_self, PyObject *_args)
static PyObject *Qd_TextFace(PyObject *_self, PyObject *_args)
static PyObject *Qd_TextMode(PyObject *_self, PyObject *_args)
static PyObject *Qd_TextSize(PyObject *_self, PyObject *_args)
static PyObject *Qd_SpaceExtra(PyObject *_self, PyObject *_args)
static PyObject *Qd_DrawChar(PyObject *_self, PyObject *_args)
static PyObject *Qd_DrawString(PyObject *_self, PyObject *_args)
static PyObject *Qd_MacDrawText(PyObject *_self, PyObject *_args)
static PyObject *Qd_CharWidth(PyObject *_self, PyObject *_args)
static PyObject *Qd_StringWidth(PyObject *_self, PyObject *_args)
static PyObject *Qd_TextWidth(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetFontInfo(PyObject *_self, PyObject *_args)
static PyObject *Qd_CharExtra(PyObject *_self, PyObject *_args)
static PyObject *Qd_TruncString(PyObject *_self, PyObject *_args)
static PyObject *Qd_SetPort(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetCursor(PyObject *_self, PyObject *_args)
static PyObject *Qd_SetCursor(PyObject *_self, PyObject *_args)
static PyObject *Qd_ShowCursor(PyObject *_self, PyObject *_args)
static PyObject *Qd_LineTo(PyObject *_self, PyObject *_args)
static PyObject *Qd_SetRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_OffsetRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_InsetRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_UnionRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_EqualRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_FrameRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_InvertRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_FillRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_CopyRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_SetRectRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_OffsetRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_UnionRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_XorRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_EqualRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_FrameRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_PaintRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_InvertRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_FillRgn(PyObject *_self, PyObject *_args)
static PyObject *Qd_GetPixel(PyObject *_self, PyObject *_args)
static PyObject *Qd_PtInRect(PyObject *_self, PyObject *_args)
static PyObject *Qd_DrawText(PyObject *_self, PyObject *_args)
static PyObject *Qd_BitMap(PyObject *_self, PyObject *_args)
static PyObject *Qd_RawBitMap(PyObject *_self, PyObject *_args)
static PyMethodDef Qd_methods[] = ;
#if !defined(__LP64__) && !defined(MAC_OS_X_VERSION_10_7)
PyObject *BMObj_NewCopied(BitMapPtr itself)
void init_Qd(void)
