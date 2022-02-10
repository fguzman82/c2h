#include <stdio.h>

int sum(int a, int b);  // Body of function is below

int double_my_num(int a)  // Body of function is here
{ 
   return(2 * a);
} // double;


int main()
{
/* Variable Declarations */

    int i = 1;
    int j = 2;
   
    printf("Enter two numbers\n");
    scanf("%d %d", &i, &j);

    i = sum(i, j);
    printf("Sum= %d\n", i);

    i = double_my_num(i);
    printf("Now i is %d\n", i); 

    i = double_my_num(sum(i, j));
    printf("Now i is %d\n", i);

    return 0;
} // main

/* Functions */
int sum(int a, int b){ 
    int i;  //Local to function
    i = a + b;
    return i;
} 