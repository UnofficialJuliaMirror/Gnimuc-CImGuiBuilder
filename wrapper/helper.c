#include "helper.h"

// ImGuiIO_Get
ImGuiConfigFlags ImGuiIO_Get_ConfigFlags(ImGuiIO* io) { return io->ConfigFlags; }
ImGuiBackendFlags ImGuiIO_Get_BackendFlags(ImGuiIO* io) { return io->BackendFlags; }
ImVec2 ImGuiIO_Get_DisplaySize(ImGuiIO* io) { return io->DisplaySize; }
float ImGuiIO_Get_DeltaTime(ImGuiIO* io) { return io->DeltaTime; }
float ImGuiIO_Get_IniSavingRate(ImGuiIO* io) { return io->IniSavingRate; }
const char* ImGuiIO_Get_IniFilename(ImGuiIO* io) { return io->IniFilename; }
const char* ImGuiIO_Get_LogFilename(ImGuiIO* io) { return io->LogFilename; }
float ImGuiIO_Get_MouseDoubleClickTime(ImGuiIO* io) { return io->MouseDoubleClickTime; }
float ImGuiIO_Get_MouseDoubleClickMaxDist(ImGuiIO* io) { return io->MouseDoubleClickMaxDist; }
float ImGuiIO_Get_MouseDragThreshold(ImGuiIO* io) { return io->MouseDragThreshold; }
int ImGuiIO_Get_KeyMap(ImGuiIO* io, int i) { return io->KeyMap[i]; }
float ImGuiIO_Get_KeyRepeatDelay(ImGuiIO* io) { return io->KeyRepeatDelay; }
float ImGuiIO_Get_KeyRepeatRate(ImGuiIO* io) { return io->KeyRepeatRate; }
void* ImGuiIO_Get_UserData(ImGuiIO* io) { return io->UserData; }
ImFontAtlas* ImGuiIO_Get_Fonts(ImGuiIO* io) { return io->Fonts; }
float ImGuiIO_Get_FontGlobalScale(ImGuiIO* io) { return io->FontGlobalScale; }
bool ImGuiIO_Get_FontAllowUserScaling(ImGuiIO* io) { return io->FontAllowUserScaling; }
ImFont* ImGuiIO_Get_FontDefault(ImGuiIO* io) { return io->FontDefault; }
ImVec2 ImGuiIO_Get_DisplayFramebufferScale(ImGuiIO* io) { return io->DisplayFramebufferScale; }
ImVec2 ImGuiIO_Get_DisplayVisibleMin(ImGuiIO* io) { return io->DisplayVisibleMin; }
ImVec2 ImGuiIO_Get_DisplayVisibleMax(ImGuiIO* io) { return io->DisplayVisibleMax; }
bool ImGuiIO_Get_MouseDrawCursor(ImGuiIO* io) { return io->MouseDrawCursor; }
bool ImGuiIO_Get_ConfigMacOSXBehaviors(ImGuiIO* io) { return io->ConfigMacOSXBehaviors; }
bool ImGuiIO_Get_ConfigInputTextCursorBlink(ImGuiIO* io) { return io->ConfigInputTextCursorBlink; }
bool ImGuiIO_Get_ConfigResizeWindowsFromEdges(ImGuiIO* io) { return io->ConfigResizeWindowsFromEdges; }
const char* ImGuiIO_Get_BackendPlatformName(ImGuiIO* io) { return io->BackendPlatformName; }
const char* ImGuiIO_Get_BackendRendererName(ImGuiIO* io) { return io->BackendRendererName; }
void* ImGuiIO_Get_ImeWindowHandle(ImGuiIO* io) { return io->ImeWindowHandle; }
void* ImGuiIO_Get_RenderDrawListsFnUnused(ImGuiIO* io) { return io->RenderDrawListsFnUnused; }
ImVec2 ImGuiIO_Get_MousePos(ImGuiIO* io) { return io->MousePos; }
bool ImGuiIO_Get_MouseDown(ImGuiIO* io, int i) { return io->MouseDown[i]; }
float ImGuiIO_Get_MouseWheel(ImGuiIO* io) { return io->MouseWheel; }
float ImGuiIO_Get_MouseWheelH(ImGuiIO* io) { return io->MouseWheelH; }
bool ImGuiIO_Get_KeyCtrl(ImGuiIO* io) { return io->KeyCtrl; }
bool ImGuiIO_Get_KeyShift(ImGuiIO* io) { return io->KeyShift; }
bool ImGuiIO_Get_KeyAlt(ImGuiIO* io) { return io->KeyAlt; }
bool ImGuiIO_Get_KeySuper(ImGuiIO* io) { return io->KeySuper; }
bool ImGuiIO_Get_KeysDown(ImGuiIO* io, int i) { return io->KeysDown[i]; }
ImWchar ImGuiIO_Get_InputCharacters(ImGuiIO* io, int i) { return io->InputCharacters[i]; }
float ImGuiIO_Get_NavInputs(ImGuiIO* io, int i) { return io->NavInputs[i]; }
bool ImGuiIO_Get_WantCaptureMouse(ImGuiIO* io) { return io->WantCaptureMouse; }
bool ImGuiIO_Get_WantCaptureKeyboard(ImGuiIO* io) { return io->WantCaptureKeyboard; }
bool ImGuiIO_Get_WantTextInput(ImGuiIO* io) { return io->WantTextInput; }
bool ImGuiIO_Get_WantSetMousePos(ImGuiIO* io) { return io->WantSetMousePos; }
bool ImGuiIO_Get_WantSaveIniSettings(ImGuiIO* io) { return io->WantSaveIniSettings; }
bool ImGuiIO_Get_NavActive(ImGuiIO* io) { return io->NavActive; }
bool ImGuiIO_Get_NavVisible(ImGuiIO* io) { return io->NavVisible; }
float ImGuiIO_Get_Framerate(ImGuiIO* io) { return io->Framerate; }
int ImGuiIO_Get_MetricsRenderVertices(ImGuiIO* io) { return io->MetricsRenderVertices; }
int ImGuiIO_Get_MetricsRenderIndices(ImGuiIO* io) { return io->MetricsRenderIndices; }
int ImGuiIO_Get_MetricsRenderWindows(ImGuiIO* io) { return io->MetricsRenderWindows; }
int ImGuiIO_Get_MetricsActiveWindows(ImGuiIO* io) { return io->MetricsActiveWindows; }
int ImGuiIO_Get_MetricsActiveAllocations(ImGuiIO* io) { return io->MetricsActiveAllocations; }
ImVec2 ImGuiIO_Get_MouseDelta(ImGuiIO* io) { return io->MouseDelta; }
ImVec2 ImGuiIO_Get_MousePosPrev(ImGuiIO* io) { return io->MousePosPrev; }
ImVec2 ImGuiIO_Get_MouseClickedPos(ImGuiIO* io, int i) { return io->MouseClickedPos[i]; }
double ImGuiIO_Get_MouseClickedTime(ImGuiIO* io, int i) { return io->MouseClickedTime[i]; }
bool ImGuiIO_Get_MouseClicked(ImGuiIO* io, int i) { return io->MouseClicked[i]; }
bool ImGuiIO_Get_MouseDoubleClicked(ImGuiIO* io, int i) { return io->MouseDoubleClicked[i]; }
bool ImGuiIO_Get_MouseReleased(ImGuiIO* io, int i) { return io->MouseReleased[i]; }
bool ImGuiIO_Get_MouseDownOwned(ImGuiIO* io, int i) { return io->MouseDownOwned[i]; }
float ImGuiIO_Get_MouseDownDuration(ImGuiIO* io, int i) { return io->MouseDownDuration[i]; }
float ImGuiIO_Get_MouseDownDurationPrev(ImGuiIO* io, int i) { return io->MouseDownDurationPrev[i]; }
ImVec2 ImGuiIO_Get_MouseDragMaxDistanceAbs(ImGuiIO* io, int i) { return io->MouseDragMaxDistanceAbs[i]; }
float ImGuiIO_Get_MouseDragMaxDistanceSqr(ImGuiIO* io, int i) { return io->MouseDragMaxDistanceSqr[i]; }
float ImGuiIO_Get_KeysDownDuration(ImGuiIO* io, int i) { return io->KeysDownDuration[i]; }
float ImGuiIO_Get_KeysDownDurationPrev(ImGuiIO* io, int i) { return io->KeysDownDurationPrev[i]; }
float ImGuiIO_Get_NavInputsDownDuration(ImGuiIO* io, int i) { return io->NavInputsDownDuration[i]; }
float ImGuiIO_Get_NavInputsDownDurationPrev(ImGuiIO* io, int i) { return io->NavInputsDownDurationPrev[i]; }
// ImGuiIO_Set
void ImGuiIO_Set_ConfigFlags(ImGuiIO* io, ImGuiConfigFlags x) { io->ConfigFlags = x; }
void ImGuiIO_Set_BackendFlags(ImGuiIO* io, ImGuiBackendFlags x) { io->BackendFlags = x; }
void ImGuiIO_Set_DisplaySize(ImGuiIO* io, ImVec2 x) { io->DisplaySize = x; }
void ImGuiIO_Set_DeltaTime(ImGuiIO* io, float x) { io->DeltaTime = x; }
void ImGuiIO_Set_IniSavingRate(ImGuiIO* io, float x) { io->IniSavingRate = x; }
void ImGuiIO_Set_IniFilename(ImGuiIO* io, const char* x) { io->IniFilename = x; }
void ImGuiIO_Set_LogFilename(ImGuiIO* io, const char* x) { io->LogFilename = x; }
void ImGuiIO_Set_MouseDoubleClickTime(ImGuiIO* io, float x) { io->MouseDoubleClickTime = x; }
void ImGuiIO_Set_MouseDoubleClickMaxDist(ImGuiIO* io, float x) { io->MouseDoubleClickMaxDist = x; }
void ImGuiIO_Set_MouseDragThreshold(ImGuiIO* io, float x) { io->MouseDragThreshold = x; }
void ImGuiIO_Set_KeyMap(ImGuiIO* io, int i, int x) { io->KeyMap[i] = x; }
void ImGuiIO_Set_KeyRepeatDelay(ImGuiIO* io, float x) { io->KeyRepeatDelay = x; }
void ImGuiIO_Set_KeyRepeatRate(ImGuiIO* io, float x) { io->KeyRepeatRate = x; }
void ImGuiIO_Set_UserData(ImGuiIO* io, void* x) { io->UserData = x; }
void ImGuiIO_Set_Fonts(ImGuiIO* io, ImFontAtlas* x) { io->Fonts = x; }
void ImGuiIO_Set_FontGlobalScale(ImGuiIO* io, float x) { io->FontGlobalScale = x; }
void ImGuiIO_Set_FontAllowUserScaling(ImGuiIO* io, bool x) { io->FontAllowUserScaling = x; }
void ImGuiIO_Set_FontDefault(ImGuiIO* io, ImFont* x) { io->FontDefault = x; }
void ImGuiIO_Set_DisplayFramebufferScale(ImGuiIO* io, ImVec2 x) { io->DisplayFramebufferScale = x; }
void ImGuiIO_Set_DisplayVisibleMin(ImGuiIO* io, ImVec2 x) { io->DisplayVisibleMin = x; }
void ImGuiIO_Set_DisplayVisibleMax(ImGuiIO* io, ImVec2 x) { io->DisplayVisibleMax = x; }
void ImGuiIO_Set_MouseDrawCursor(ImGuiIO* io, bool x) { io->MouseDrawCursor = x; }
void ImGuiIO_Set_ConfigMacOSXBehaviors(ImGuiIO* io, bool x) { io->ConfigMacOSXBehaviors = x; }
void ImGuiIO_Set_ConfigInputTextCursorBlink(ImGuiIO* io, bool x) { io->ConfigInputTextCursorBlink = x; }
void ImGuiIO_Set_ConfigResizeWindowsFromEdges(ImGuiIO* io, bool x) { io->ConfigResizeWindowsFromEdges = x; }
void ImGuiIO_Set_BackendPlatformName(ImGuiIO* io, const char* x) { io->BackendPlatformName = x; }
void ImGuiIO_Set_BackendRendererName(ImGuiIO* io, const char* x) { io->BackendRendererName = x; }
void ImGuiIO_Set_ImeWindowHandle(ImGuiIO* io, void* x) { io->ImeWindowHandle = x; }
void ImGuiIO_Set_RenderDrawListsFnUnused(ImGuiIO* io, void* x) { io->RenderDrawListsFnUnused = x; }
void ImGuiIO_Set_MousePos(ImGuiIO* io, ImVec2 x) { io->MousePos = x; }
void ImGuiIO_Set_MouseDown(ImGuiIO* io, int i, bool x) { io->MouseDown[i] = x; }
void ImGuiIO_Set_MouseWheel(ImGuiIO* io, float x) { io->MouseWheel = x; }
void ImGuiIO_Set_MouseWheelH(ImGuiIO* io, float x) { io->MouseWheelH = x; }
void ImGuiIO_Set_KeyCtrl(ImGuiIO* io, bool x) { io->KeyCtrl = x; }
void ImGuiIO_Set_KeyShift(ImGuiIO* io, bool x) { io->KeyShift = x; }
void ImGuiIO_Set_KeyAlt(ImGuiIO* io, bool x) { io->KeyAlt = x; }
void ImGuiIO_Set_KeySuper(ImGuiIO* io, bool x) { io->KeySuper = x; }
void ImGuiIO_Set_KeysDown(ImGuiIO* io, int i, bool x) { io->KeysDown[i] = x; }
void ImGuiIO_Set_InputCharacters(ImGuiIO* io, int i, ImWchar x) { io->InputCharacters[i] = x; }
void ImGuiIO_Set_NavInputs(ImGuiIO* io, int i, float x) { io->NavInputs[i] = x; }
void ImGuiIO_Set_WantCaptureMouse(ImGuiIO* io, bool x) { io->WantCaptureMouse = x; }
void ImGuiIO_Set_WantCaptureKeyboard(ImGuiIO* io, bool x) { io->WantCaptureKeyboard = x; }
void ImGuiIO_Set_WantTextInput(ImGuiIO* io, bool x) { io->WantTextInput = x; }
void ImGuiIO_Set_WantSetMousePos(ImGuiIO* io, bool x) { io->WantSetMousePos = x; }
void ImGuiIO_Set_WantSaveIniSettings(ImGuiIO* io, bool x) { io->WantSaveIniSettings = x; }
void ImGuiIO_Set_NavActive(ImGuiIO* io, bool x) { io->NavActive = x; }
void ImGuiIO_Set_NavVisible(ImGuiIO* io, bool x) { io->NavVisible = x; }
void ImGuiIO_Set_Framerate(ImGuiIO* io, float x) { io->Framerate = x; }
void ImGuiIO_Set_MetricsRenderVertices(ImGuiIO* io, int x) { io->MetricsRenderVertices = x; }
void ImGuiIO_Set_MetricsRenderIndices(ImGuiIO* io, int x) { io->MetricsRenderIndices = x; }
void ImGuiIO_Set_MetricsRenderWindows(ImGuiIO* io, int x) { io->MetricsRenderWindows = x; }
void ImGuiIO_Set_MetricsActiveWindows(ImGuiIO* io, int x) { io->MetricsActiveWindows = x; }
void ImGuiIO_Set_MetricsActiveAllocations(ImGuiIO* io, int x) { io->MetricsActiveAllocations = x; }
void ImGuiIO_Set_MouseDelta(ImGuiIO* io, ImVec2 x) { io->MouseDelta = x; }
void ImGuiIO_Set_MousePosPrev(ImGuiIO* io, ImVec2 x) { io->MousePosPrev = x; }
void ImGuiIO_Set_MouseClickedPos(ImGuiIO* io, int i, ImVec2 x) { io->MouseClickedPos[i] = x; }
void ImGuiIO_Set_MouseClickedTime(ImGuiIO* io, int i, double x) { io->MouseClickedTime[i] = x; }
void ImGuiIO_Set_MouseClicked(ImGuiIO* io, int i, bool x) { io->MouseClicked[i] = x; }
void ImGuiIO_Set_MouseDoubleClicked(ImGuiIO* io, int i, bool x) { io->MouseDoubleClicked[i] = x; }
void ImGuiIO_Set_MouseReleased(ImGuiIO* io, int i, bool x) { io->MouseReleased[i] = x; }
void ImGuiIO_Set_MouseDownOwned(ImGuiIO* io, int i, bool x) { io->MouseDownOwned[i] = x; }
void ImGuiIO_Set_MouseDownDuration(ImGuiIO* io, int i, float x) { io->MouseDownDuration[i] = x; }
void ImGuiIO_Set_MouseDownDurationPrev(ImGuiIO* io, int i, float x) { io->MouseDownDurationPrev[i] = x; }
void ImGuiIO_Set_MouseDragMaxDistanceAbs(ImGuiIO* io, int i, ImVec2 x) { io->MouseDragMaxDistanceAbs[i] = x; }
void ImGuiIO_Set_MouseDragMaxDistanceSqr(ImGuiIO* io, int i, float x) { io->MouseDragMaxDistanceSqr[i] = x; }
void ImGuiIO_Set_KeysDownDuration(ImGuiIO* io, int i, float x) { io->KeysDownDuration[i] = x; }
void ImGuiIO_Set_KeysDownDurationPrev(ImGuiIO* io, int i, float x) { io->KeysDownDurationPrev[i] = x; }
void ImGuiIO_Set_NavInputsDownDuration(ImGuiIO* io, int i, float x) { io->NavInputsDownDuration[i] = x; }
void ImGuiIO_Set_NavInputsDownDurationPrev(ImGuiIO* io, int i, float x) { io->NavInputsDownDurationPrev[i] = x; }

// ImDrawData_Get
bool ImDrawData_Get_Valid(ImDrawData* data) { return data->Valid; }
ImDrawList* ImDrawData_Get_CmdLists(ImDrawData* data, int i) { return data->CmdLists[i]; }
int ImDrawData_Get_CmdListsCount(ImDrawData* data) { return data->CmdListsCount; }
int ImDrawData_Get_TotalIdxCount(ImDrawData* data) { return data->TotalIdxCount; }
int ImDrawData_Get_TotalVtxCount(ImDrawData* data) { return data->TotalVtxCount; }
ImVec2 ImDrawData_Get_DisplayPos(ImDrawData* data) { return data->DisplayPos; }
ImVec2 ImDrawData_Get_DisplaySize(ImDrawData* data) { return data->DisplaySize; }

// ImDrawList_Get
ImVector_ImDrawCmd ImDrawList_Get_CmdBuffer(ImDrawList* list) { return list->CmdBuffer; }
ImVector_ImDrawIdx ImDrawList_Get_IdxBuffer(ImDrawList* list) { return list->IdxBuffer; }
ImVector_ImDrawVert ImDrawList_Get_VtxBuffer(ImDrawList* list) { return list->VtxBuffer; }

// ImDrawCmd_Get
unsigned int ImDrawCmd_Get_ElemCount(ImDrawCmd* cmd) { return cmd->ElemCount; }
ImVec4 ImDrawCmd_Get_ClipRect(ImDrawCmd* cmd) { return cmd->ClipRect; }
ImTextureID ImDrawCmd_Get_TextureId(ImDrawCmd* cmd) { return cmd->TextureId; }
ImDrawCallback ImDrawCmd_Get_UserCallback(ImDrawCmd* cmd) { return cmd->UserCallback; }
void* ImDrawCmd_Get_UserCallbackData(ImDrawCmd* cmd) { return cmd->UserCallbackData; }

// ImGuiSizeCallbackData_Get
void* ImGuiSizeCallbackData_Get_UserData(ImGuiSizeCallbackData* data) { return data->UserData; }
ImVec2 ImGuiSizeCallbackData_Get_Pos(ImGuiSizeCallbackData* data) { return data->Pos; }
ImVec2 ImGuiSizeCallbackData_Get_CurrentSize(ImGuiSizeCallbackData* data) { return data->CurrentSize; }
ImVec2 ImGuiSizeCallbackData_Get_DesiredSize(ImGuiSizeCallbackData* data) { return data->DesiredSize; }
// ImGuiSizeCallbackData_Set
void ImGuiSizeCallbackData_Set_DesiredSize(ImGuiSizeCallbackData* data, ImVec2 x) { data->DesiredSize = x; }
