#include <stdio.h>

int main() {
    int n;
    int a = 0;
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        if (i % 5 == 0) {
            a = a + i;
        } else {
            continue;
        }
    }
    printf("%d\n", a);
    return 0;
}
