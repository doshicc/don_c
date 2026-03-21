#include <stdio.h>

int main() {
    int n, a, flag = 0;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        numbers[i] = a;
        if (numbers[i] < numbers[i - 1] && i != 0) {
            flag = 1;
        }
    }

    if (flag == 1) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}