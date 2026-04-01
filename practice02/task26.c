#include <stdio.h>

int main() {
    int n, sum;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum = 0;
        int a = i;

        while (a > 0) {
            sum += a % 10;
            a /= 10;
        }

        if (sum > 10) {
            printf("%d\n", i);
        } 
    }
    return 0;
}