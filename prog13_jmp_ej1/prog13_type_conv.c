#include <stdio.h>

int main()
{

    /* Variable Declarations */

    int i = 5;
    float f = 3.0;
    char c = 'a';

    f = i;
    printf("Float %.1f\n", f);

    i = f;
    printf("Integer %d\n", i);

    i = f / 2;
    printf("Integer %d\n", i);

    i = (int)f / 2;
    printf("Integer after cast %d\n", i);

    i = 5;
    f = i / 2;
    printf("Float f after divide %.1f\n", f);

    f = (float)i / 2; // Cast takes precedence over /
    printf("Float after cast and divide %.1f\n", f);

    i = c;
    printf("Integer corresponding to 'a' is %d\n", i);

    c = i; // What if c= -26; ??
    printf("Char %c\n", c);

    c = (char)i;
    printf("Char after cast %c\n", c);

    f = 98.0;
    c = f;
    printf("Char %c\n", c);

    c = (int)f;
    printf("Char after weird cast %c\n", c);

    c = (char)f;
    printf("Char after cast %c\n", c);

    printf("Integer %d\n", f / 2 + f);
    printf("Integer %d\n", (int)(f / 2 + f));

    i = 2;
    printf("Weird Float %5.2f\n", i / 10);
    printf("Float %5.2f\n", (float)(i / 10));
    printf("Float %5.2f\n", (float)i / 10);

    f = 2.5;
    printf("Float %5.0f\n", f);

    i = 2.5;
    f = i; // All these truncate!
    printf("Float %5.2f\n", f);
    f = (float)i;
    printf("Float %5.2f\n", f);

    return 0;
} // main