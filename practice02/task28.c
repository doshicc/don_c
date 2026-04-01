#include <stdio.h>

int main() {
    int n, count, b;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        count = 0;
        int a = i;

        while (a > 0) {
            b = a % 10;
            if (b == 3) {
                count++;
            }
            a /= 10;
        }

        if (count > 0) {
            continue;
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}