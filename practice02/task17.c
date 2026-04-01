#include <stdio.h>

int main() {
    int n = 1;
    int sum = 0;
    while (n != 0) {
        scanf("%d", &n);
        if (n > 0) {
            sum = sum + n;
        } else {
            continue;
        }
    }
    printf("%d\n", sum);
    return 0;
}
