#include <stdio.h>

int main() {
    int n, a, flag = 0;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        numbers[i] = a;
        if (numbers[i] % 2 == 0) {
            flag = 1;
        }
    }

    if (flag == 0) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}