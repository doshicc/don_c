#include <stdio.h>

int main() {
    int n, a, fact, sum;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum = 0;
        a = i;
        while (a > 0) {
            fact = 1;
            for (int j = 1; j <= a % 10; j++) {
                fact *= j;
            }
            sum += fact;
            a /= 10;
        }
        if (sum == i) {
            printf("%d\n", i);
        } 
    }
    return 0;
}