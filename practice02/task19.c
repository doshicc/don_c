#include <stdio.h>

int main() {
    int n;
    int a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a % 2 == 0) {
            printf("%d\n", a * a);
        } else {
            continue;
        }
    }
    return 0;
}