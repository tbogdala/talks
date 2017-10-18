// OpenVR Function Pointer Tables
struct VR_IVRSystem_FnTable
{
void (OPENVR_FNTABLE_CALLTYPE *GetRecommendedRenderTargetSize)(uint32_t * pnWidth, uint32_t * pnHeight);
struct HmdMatrix44_t (OPENVR_FNTABLE_CALLTYPE *GetProjectionMatrix)(EVREye eEye, float fNearZ, float fFarZ);
void (OPENVR_FNTABLE_CALLTYPE *GetProjectionRaw)(EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom);
bool (OPENVR_FNTABLE_CALLTYPE *ComputeDistortion)(EVREye eEye, float fU, float fV, struct DistortionCoordinates_t * pDistortionCoordinates);
struct HmdMatrix34_t (OPENVR_FNTABLE_CALLTYPE *GetEyeToHeadTransform)(EVREye eEye);
bool (OPENVR_FNTABLE_CALLTYPE *GetTimeSinceLastVsync)(float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter);
int32_t (OPENVR_FNTABLE_CALLTYPE *GetD3D9AdapterIndex)();
void (OPENVR_FNTABLE_CALLTYPE *GetDXGIOutputInfo)(int32_t * pnAdapterIndex);
void (OPENVR_FNTABLE_CALLTYPE *GetOutputDevice)(uint64_t * pnDevice, ETextureType textureType, struct VkInstance_T * pInstance);
bool (OPENVR_FNTABLE_CALLTYPE *IsDisplayOnDesktop)();
bool (OPENVR_FNTABLE_CALLTYPE *SetDisplayVisibility)(bool bIsVisibleOnDesktop);
void (OPENVR_FNTABLE_CALLTYPE *GetDeviceToAbsoluteTrackingPose)(ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, struct TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount);
void (OPENVR_FNTABLE_CALLTYPE *ResetSeatedZeroPose)();
struct HmdMatrix34_t (OPENVR_FNTABLE_CALLTYPE *GetSeatedZeroPoseToStandingAbsoluteTrackingPose)();
/* ... ... ... */