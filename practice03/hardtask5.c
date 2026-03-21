#include <stdio.h>

int main() {
    int n, a, count, max = 0;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        numbers[i] = a;
    }

    for (int i = 0; i < n; i++) {
        count = 1;
        for (int j = i; j < n; j++) {
            if (j == 0) {
                continue;
            }
            if (numbers[j] <= numbers[j - 1]) {
                break;
            }
            count++;
        }
        if (count > max) {
            max = count;
        }
    }

    printf("%d\n", max);

    return 0;
}