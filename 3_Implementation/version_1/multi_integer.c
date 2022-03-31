#include "stdio.h"

int main()
{
    int A , B;

    printf("Enter two number to be multifly\n ");
    scanf("%d %d", &A, &B);

    int result = A * B;

    printf("result = %d", result);

    return 0;
}