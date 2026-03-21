#include <stdio.h>

int main() {
    int numbers[10];
    int n;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        numbers[i] = n;
    }

    for (int j = 9; j >= 0; j--) {
        printf("%d ", numbers[j]);
    }

    printf("\n");

    return 0;
}