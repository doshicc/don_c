#include <stdio.h>
#include <limits.h> 

int main() {
    int a;
    scanf("%d", &a);
    int b = INT_MAX + a;
    printf("%d\n", b);
    return 0;
}
