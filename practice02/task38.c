#include <stdio.h>

int main() { 
    int n, count = 0;
    scanf("%d", &n);   
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((1 <= i) && (i <= n) && (1 <= j) && (j <= n) && ((i * j) % 7 == 0)) {
                count++;
            } else {
                continue;
            }
        }
    } 
    printf("%d\n", count); 
    return 0;
}