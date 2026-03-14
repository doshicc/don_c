#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    float sum = a + b + c;
    printf("%.5f\n", (float)sum / 3);
    return 0;
}
