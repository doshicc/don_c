#include <stdio.h>

int main() {
    int n, m, a;
    scanf("%d", &n);
    m = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a > m) {
            m = a;
        } else {
            continue;
        }
    }
    printf("%d\n", m);
}

