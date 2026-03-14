#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int f = (a * 1.8) + 32;
    int k = a + 273;
    printf("фаренгейты - %d, кельвин - %d \n", f, k);
    return 0;
}