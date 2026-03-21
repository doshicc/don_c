#include <stdio.h>

int main() {
    int n, a, flag = -1;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        numbers[i] = a;
    }

    for (int j = 0; j < n; j++) {
        if (numbers[j] < 0) {
            flag = j;
            break;
        }
    }

    printf("%d\n", flag);

    return 0;
}