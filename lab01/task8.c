#include <stdio.h>
#include <limits.h> 

int main() {
    int x = 2147483647; 
    x = x + 1;
    printf("x + 1 = %d\n\n", x);
    printf("Диапазон значений int: от %d до %d\n", INT_MIN, INT_MAX);   // поэтому при переполнении число становится максимально минимальным (самым маленьким) 
    return 0;
}