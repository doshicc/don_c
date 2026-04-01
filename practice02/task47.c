#include <stdio.h>

int main() {
    int n, res = 1;
    scanf("%d", &n);
    while (n > 0) {
        if ((n % 10) % 2 != 0) {
            res = 0;
            break;
        } else {
            n /= 10;
        }
    }
    if (res == 0) {
        printf("нет\n");
    } else {
        printf("да\n");
    }
    return 0;
}