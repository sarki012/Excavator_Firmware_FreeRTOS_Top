#ifndef FREERTOS_STDINT
#define FREERTOS_STDINT


typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef long int32_t;
typedef unsigned long uint32_t;

#ifndef SIZE_MAX
    #define SIZE_MAX    ( ( size_t ) -1 )
#endif

#endif /* FREERTOS_STDINT */