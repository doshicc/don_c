#include <stdio.h>

int main() {
    int n, a, first;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        numbers[i] = a;
    }

    first = numbers[0];
    numbers[0] = numbers[n - 1];
    numbers[n - 1] = first;

    for (int j = 0; j < n; j++) {
        printf("%d ", numbers[j]);
    }

    printf("\n");

    return 0;
}