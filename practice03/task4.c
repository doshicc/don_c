#include <stdio.h>

int main() {
    int n, a, sum = 0;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        numbers[i] = a;
        sum += numbers[i];
    }

    printf("%d\n", sum);

    return 0;
}