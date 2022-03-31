#include "multi_integer.h"

funtion_status_t multi_integer(int param1, int param2, int* result)
{
    long int multi = param1 + param2;

    if(multi > INT_MAX)
        return OVERFLOW;

    if(multi < INT_MIN)
        return UNDERFLOW;
    
    *result = multi;
    return SUCCESS;
}



