#include <stdio.h>

int main() {
    int n, a, sum;
    scanf("%d", &n);
    for (int i = n + 1; i > n; i++) {
        sum = 0;
        a = i;
        while (a > 0) {
            sum += a % 10;
            a /= 10;
        } 
        if (i % sum == 0) {
            printf("%d\n", i);
            break;
        } else {
            continue;
        }
    }
    return 0;
}