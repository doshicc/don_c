#include <stdio.h>

int main() { 
    int n, count;
    scanf("%d", &n);   
    for (int i = 2; i < n; i++) {
        count = 0;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                count++;
            } else {
                continue;
            }
        }
        if (count > 0) {
            continue;
        } else {
            printf("%d\n", i);
        }
    } 
    return 0;
}