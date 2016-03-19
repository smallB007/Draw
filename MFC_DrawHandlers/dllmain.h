// dllmain.h : Declaration of module class.

class CMFC_DrawHandlersModule : public ATL::CAtlDllModuleT< CMFC_DrawHandlersModule >
{
public :
	DECLARE_LIBID(LIBID_MFC_DrawHandlersLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_MFC_DRAWHANDLERS, "{5954873B-3DA0-4EA9-9225-CB19C4AACDC6}")
};

extern class CMFC_DrawHandlersModule _AtlModule;
