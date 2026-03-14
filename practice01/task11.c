#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("число четное\n");
    } else {
        printf("число нечетное\n");
    }
    return 0;
}
