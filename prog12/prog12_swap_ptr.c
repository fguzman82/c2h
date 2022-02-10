#include <stdio.h>
#include <stdint.h>

void swap(int *a, int *b);

int x;
int y;

int main()
{
    x = 1;
    y = 2;
    printf("value of x: %d\n", x);
    printf("value de y: %d\n", y);
    swap(&x, &y);
    printf("value of x: %d\n", x);
    printf("value de y: %d\n", y);
    return 0;
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}