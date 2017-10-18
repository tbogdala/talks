type System struct {
	ptr *C.struct_VR_IVRSystem_FnTable
}

func (sys *System) GetProjectionMatrix(eye int, near, far float32, dest *mgl.Mat4) {
	m44 := C.system_GetProjectionMatrix(sys.ptr, C.EVREye(eye), C.float(near), C.float(far))
	/* reorder the matrix for compatability with OpenGL */
}

func (sys *System) GetEyeToHeadTransform(eye int, dest *mgl.Mat3x4) {
	m34 := C.system_GetEyeToHeadTransform(sys.ptr, C.EVREye(eye))
	/* reorder the matrix for compatability with OpenGL */
}

/* ... */