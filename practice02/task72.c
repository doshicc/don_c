#include <stdio.h>
#include <math.h>

int main() {
    int n, a, sum, pr;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = 0;
        pr = 1;
        a = i;
        while (a > 0) {
            sum += a % 10;
            pr *= a % 10;
            a /= 10;
        }
        if (sum == pr) {
            printf("%d\n", i);
        }
        
    }
    
    return 0;
}