#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b) {
        if (a > c) {
            printf("максимальное число: %d\n", a);
        }
        else {
            printf("максимальное число: %d\n", c);
        }
    } else {
        if (b > c) {
            printf("масимальное число: %d\n", b);
        } else {
            printf("максимальное число: %d\n", c);
        }

    }

    return 0;
}
