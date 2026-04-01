#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        printf("fact = %d\n", n);
        return 1;
    }
    int res = n * factorial(n - 1);
    printf("fact = %d\n", res);
    return res;
}

int main() {
    int n;
    scanf("%d", &n);
    factorial(n);
    return 0;
}