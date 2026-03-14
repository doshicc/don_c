#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b == c) {
        printf("подходит\n");
    } else {
        printf("не подходит\n");
    }
    return 0;
}
