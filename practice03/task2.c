#include <stdio.h>

int main() {
    int n, a, max = 0;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        numbers[i] = a;
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("%d\n", max);

    return 0;
}