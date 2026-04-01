#include <stdio.h>

int main() {
    int n;
    int a;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a < 0) {
            sum = sum + a;
        } else {
            continue;
        }
    }
    printf("%d\n", sum);
    return 0;
}