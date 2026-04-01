#include <stdio.h>
#include <math.h>

int main() {
    int n, sum, count, a, b;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        count = 0;
        a = i;
        while (a > 0) {
            count++;
            a /= 10;
        }
        b = i;
        sum = 0;
        while (b > 0) {
            sum += (int)pow((b % 10), count);
            b /= 10;
        }
        if (sum == i) {
            printf("%d\n", i);
        }
        
    }
    return 0;
}