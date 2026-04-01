#include <stdio.h>

int main() {
    int n, m = 0;
    scanf("%d", &n);
    while (n > 0) {
        if (n % 10 > m) {
            m = n % 10;
            n /= 10;
        } else {
            n /= 10;
        }
    }
    printf("%d\n", m);
    return 0;
}