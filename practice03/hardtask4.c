#include <stdio.h>

int main() {
    int n, a, count = 0;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        numbers[i] = a;
    }

    for (int i = 0; i < n; i++) {
        if ((i == 0) || (numbers[i] >= numbers[i - 1])) {
            continue;
        }
        count++;
    }

    printf("%d\n", count);

    return 0;
}