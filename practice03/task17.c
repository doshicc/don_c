#include <stdio.h>

int main() {
    int n, a, max = 0, indexmax;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        numbers[i] = a;
        if (numbers[i] > max) {
            max = numbers[i];
            indexmax = i;
        }
    }

    for (int i = 0; i < n; i++) {
        if (i <= indexmax) {
            printf("%d ", numbers[i]);
        } else {
            printf("0 ");
        }
    }

    printf("\n");

    return 0;
}