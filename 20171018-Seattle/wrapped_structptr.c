struct HmdMatrix44_t system_GetProjectionMatrix(struct VR_IVRSystem_FnTable* iSystem, EVREye eEye, float fNearZ, float fFarZ) {
    return iSystem->GetProjectionMatrix(eEye, fNearZ, fFarZ);
}

struct HmdMatrix34_t system_GetEyeToHeadTransform(struct VR_IVRSystem_FnTable* iSystem, EVREye eEye) {
    return iSystem->GetEyeToHeadTransform(eEye);
}

bool system_ComputeDistortion(struct VR_IVRSystem_FnTable* iSystem, EVREye eEye, float fU, float fV, struct DistortionCoordinates_t* dest) {
    return iSystem->ComputeDistortion(eEye, fU, fV, dest) != 0;
}

bool system_IsTrackedDeviceConnected(struct VR_IVRSystem_FnTable* iSystem, TrackedDeviceIndex_t unDeviceIndex) {
    return iSystem->IsTrackedDeviceConnected(unDeviceIndex);
}

/* ... */