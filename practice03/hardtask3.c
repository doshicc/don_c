#include <stdio.h>

int main() {
    int n, a, max = 0, count;
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
            if ((numbers[j] > 0 && numbers[j - 1] > 0) || (numbers[j] < 0 && numbers[j - 1] < 0)) {
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