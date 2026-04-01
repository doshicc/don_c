#include <stdio.h>

int main() {
    int n = 1;
    int count = 0;
    while (n != 0) {
        count++;
        scanf("%d", &n);
    }
    printf("%d\n", count);
    return 0;
}
