struct VR_IVRSystem_FnTable* _iSystem;

// paraphrased & error checking skipped 
int initInternal(int appTypeEnum) {
    EVRInitError error = EVRInitError_VRInitError_None;
    intptr_t _iToken = VR_InitInternal(&error, appTypeEnum);

    // IVRSystem_Version is defined in openvr_capi.h as
    // static const char * IVRSystem_Version = "IVRSystem_017";
    bool icheck = VR_IsInterfaceVersionValid(IVRSystem_Version);

    char interfaceFnTable[256];
    sprintf(interfaceFnTable, "FnTable:%s", IVRSystem_Version);
    _iSystem = (struct VR_IVRSystem_FnTable*) VR_GetGenericInterface(interfaceFnTable, &error);
}
