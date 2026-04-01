#include <stdio.h>

void calc(int a, int b, int *sum, int *mul) {
    *sum = a + b;
    *mul = a * b;
}

int main() {
    int i, j, sum, mul;
    scanf("%d %d", &i, &j);
    calc(i, j, &sum, &mul);
    printf("%d %d\n", sum, mul);
}