#include <stdio.h>

int main() {
    int n, res = 1;
    scanf("%d", &n);
    while (n > 0) {
        if (n % 10 != 0) {
            res *= n % 10;
            n /= 10;
        } else {
            n /= 10;
        }
    }
    printf("%d\n", res);
    return 0;
}