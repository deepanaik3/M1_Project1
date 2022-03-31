#include "stdio.h"
#include "unity.h"

int multi_integer(param1 , param2)

{
    
    int result = param1 * param2;

    return result;

}

void manual_test_multi_integer()
{
    
    if(0 == multi_integer(0 , 0))

        printf("Multifly function is working\n");
    else

        printf("Multifly function is not working!!\n");

    if(15 == multi_integer(5 , 3))

        printf("Multifly function is working for positive numbers\n");
    else

        printf("Multifly function is not working for positive numbers!!\n");

    if(-10 == multi_integer(5 ,-2))

        printf("Multifly function is working for negative number\n");
    else

        printf("Multifly function is not working for negative number!!\n");
}