#include <stdio.h>

int main() {
    int n, a, max = 0, indexmax;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        numbers[i] = a;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                a = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = a;
            }
        }
        
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}