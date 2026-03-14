#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float res = (float)((a + b) * c) / 2.0;
    printf("%.1f\n", res);
}