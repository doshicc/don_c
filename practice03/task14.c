#include <stdio.h>

int main() {
    int n, a, max = 0, res;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        numbers[i] = a;
        if (numbers[i] > max) {
            res = max;
            max = numbers[i];
        } else if (numbers[i] < max && numbers[i] > res) {
            res = numbers[i];
        }
    }

    printf("%d\n", res);

    return 0;
}