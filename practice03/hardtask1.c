#include <stdio.h>

int main() {
    int n, a, max = 0, sum, indexstart, indexend;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        numbers[i] = a;
    }

    for (int j = 0; j < n; j++) {
        sum = 0;
        for (int h = j; h < n; h++) {
            sum += numbers[h];
            if (sum > max) {
                max = sum;
                indexstart = j;
                indexend = h;
            }
        }
    }

    printf("sum %d\nstart %d end %d\n", max, indexstart, indexend);

    return 0;
}