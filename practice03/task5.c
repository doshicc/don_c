#include <stdio.h>

int main() {
    int n, a, count = 0;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        numbers[i] = a;
        if (numbers[i] < 0) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}