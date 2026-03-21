#include <stdio.h>
#include <limits.h>

int main() {
    int n, a, min = INT_MAX, indexmin;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        numbers[i] = a;
        if (numbers[i] < min) {
            min = numbers[i];
            indexmin = i;
        }
    }

    printf("значение %d индекс %d\n", min, indexmin);

    return 0;
}