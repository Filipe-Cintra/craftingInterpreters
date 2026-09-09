#ifndef clox_common_h
#define clox_common_h

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define NAN_BOXING

// Activate these parameters to check lox's execution
// #define DEBUG_PRINT_CODE
// #define DEBUG_TRACE_EXECUTION

// Activate these parameters to check the garbage collector's execution
// #define DEBUG_STRESS_GC
// #define DEBUG_LOG_GC

#define UINT8_COUNT (UINT8_MAX + 1)

#endif