#include <stdio.h>

void max2(int a, int b, int *res) {
    if (a > b) {
        *res = a;
    } else {
        *res = b;
    }
}

int main() {
    int i, j;
    int res;
    scanf("%d %d", &i, &j);
    max2(i, j, &res);
    printf("%d\n", res);
}