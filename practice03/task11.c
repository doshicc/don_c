#include <stdio.h>

int main() {
    int n, a, x, count = 0;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        numbers[i] = a;
    }

    scanf("%d", &x);

    for (int j = 0; j < n; j++) {
        if (numbers[j] == x) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}