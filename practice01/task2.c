#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int res = a + b;
    printf("%d\n", res);
    res = a - b;
    printf("%d\n", res);
    res = a * b;
    printf("%d\n", res);
    res = a / b;
    printf("%d\n", res);
    return 0;
}

