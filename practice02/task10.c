#include <stdio.h>

int main() {
    int n;
    int p = 1;
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        if (i % 3 == 0) {
            p = p * i;
        }
        else {
            continue;
        }
    }
    printf("%d\n", p);
    return 0;
}
