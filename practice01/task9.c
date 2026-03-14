#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if ((a % 2) == 0) {
        printf("делится на 2\n");
    } else {
        printf("не делится на 2\n");
    }
    if ((a % 3) == 0) {
        printf("делится на 3\n");
    } else {
        printf("не делится на 3\n");
    }
    return 0;
}
