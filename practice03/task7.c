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

    printf("%f\n", (float)sum / (float)n);

    return 0;
}