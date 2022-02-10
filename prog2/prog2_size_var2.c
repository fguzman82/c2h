#include <stdio.h>
#include <float.h>

int main()
{

    int num1;
    int num2;
    int num3;

    num1 = sizeof(int);
    num2 = sizeof(long);
    num3 = sizeof(float);
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
    printf("Storage size for float : %d \n", sizeof(long));
    printf("Minimum float positive value: %E\n", FLT_MIN);
    printf("Maximum float positive value: %E\n", FLT_MAX);
    printf("Precision value: %d\n", FLT_DIG);

    return 0;
}
