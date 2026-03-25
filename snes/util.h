#ifdef _MSC_VER
#define FORCEINLINE inline __forceinline
#else
#define FORCEINLINE inline __attribute__((always_inline))
#endif

#define CLAMP16( io )\
{\
	if ( (int16_t) io != io )\
		io = (io >> 31) ^ 0x7FFF;\
}
