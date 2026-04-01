#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    while (n > 0) {
        if ((n % 10) == 5) {
            n /= 10;
            continue;
        } else {
            sum += n % 10;
            n /= 10;
        }
    }
    printf("%d\n", sum);
    return 0;
}