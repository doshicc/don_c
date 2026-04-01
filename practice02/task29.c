#include <stdio.h>

int main() {
    int n;
    int count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if ((i % 5 == 0) && (i > count)){
            count = i;
        } else {
            continue;
        }
    }
    printf("%d\n", count);
    return 0;
}