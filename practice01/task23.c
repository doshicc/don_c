#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("первое число больше \n");
    } else if (b > a) {
        printf("второе число больше \n");
    } else {
        printf("числа равны \n");
    }
    return 0;
}