#include <stdio.h>

int main() {
    int n;
    int res = 0;
    scanf("%d", &n);
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            res++;
        } else {
            continue;
        }
    }
    if (res > 0) {
        printf("число не простое\n");
    } else {
        printf("число простое\n");
    }
    return 0;
}