#include <stdio.h>

int  y;      // Global variable

void func() {

    int x = 0; // x is local
        x = x + 1;
        printf("%d\n", x);  
        y = y+1;
}
 
int main() { 

    int x = 2;
    y = 1;
    func(); 

    y = y+1;
    printf("%d\n", y);     
return 0;
}