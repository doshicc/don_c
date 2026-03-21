#include <stdio.h>

int main() {
    int n, a, s, sum, count = 0;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        numbers[i] = a;
    }

    scanf("%d", &s);

    for (int j = 0; j < n; j++) {
        sum = 0;
        for (int h = j; h < n; h++) {
            sum += numbers[h];
            if (sum == s) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}