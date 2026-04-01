#include <stdio.h>

int main() {
    int n;
    int a;
    int count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a > 0) {
            count++;
        } else {
            continue;
        }
    }
    printf("%d\n", count);
    return 0;
}
