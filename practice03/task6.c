#include <stdio.h>

int main() {
    int n, a;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        numbers[i] = a;
        if (numbers[i] < 0) {
            numbers[i] = 0;
        }
    }

    for (int j = 0; j < n; j++) {
        printf("%d ", numbers[j]);
    }

    printf("\n");

    return 0;
}