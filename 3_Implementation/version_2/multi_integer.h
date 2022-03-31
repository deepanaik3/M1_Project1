
#ifndef _MULTI_INTEGER_H_
#define _MULTI_INTEGER_H_

#include <stdio.h>
#include <limits.h>

typedef enum funtion_status_t
{
    SUCCESS,
    OVERFLOW,
    UNDERFLOW
}funtion_status_t;

/**
 * @brief Function to multi 2 integer numbers
 * 
 * @param param1[in] Operand 1 to be multiflied
 * @param param2[in] Operand 2 to be multiflied
 * @param result[out] Result of multiflication operation if success
 * @return funtion_status_t Result of the function execution
 */
funtion_status_t multi_integer(int param1, int param2, int* result);

#endif  /* _MUlTI_INTEGER_H_ */