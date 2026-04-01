#include <stdio.h>

void swap(int *a, int *b) {
    int n = *a;
    *a = *b;
    *b = n;
}

int main() {
    int i, j;
    scanf("%d %d", &i, &j);
    swap(&i, &j);
    printf("%d %d\n", i, j);
}