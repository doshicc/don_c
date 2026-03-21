#include <stdio.h>

int main() {
    int n, a;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (i == n - 1) {
            numbers[0] = a;
            continue;
        } 
        numbers[i + 1] = a;
    }

    for (int j = 0; j < n; j++) {
        printf("%d ", numbers[j]);
    }

    printf("\n");

    return 0;
}