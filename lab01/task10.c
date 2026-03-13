#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c;

    c = a;   
    a = b;   
    b = c;  

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    return 0;
}