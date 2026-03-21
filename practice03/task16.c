#include <stdio.h>

int main() {
    int n, a, mid = 0, count = 0, sum = 0;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        numbers[i] = a;
        sum += numbers[i];
    }

    mid = sum / n;

    for (int i = 0; i < n; i++) {
        if (numbers[i] > mid) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}