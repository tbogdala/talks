func GetRecommendedRenderTargetSize() (uint32, uint32) {
	var w, h C.uint32_t
	systemInterface := C._iSystem
	systemInterface.GetRecommendedRenderTargetSize(&w, &h)
	return uint32(w), uint32(h)
}
