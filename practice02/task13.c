#include <stdio.h>

int main() {
    int n;
    int a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a > 10) {
            printf("%d\n", a);
        } else {
            continue;
        }
    }
    return 0;
}