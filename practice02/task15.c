#include <stdio.h>
#include <limits.h>

int main() {
    int n, m, a;
    m = INT_MAX;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if ((a < m) && (a % 2 == 0)) {
            m = a;
        } else {
            continue;
        }
    }
    printf("%d\n", m);
}
