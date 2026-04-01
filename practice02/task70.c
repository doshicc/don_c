#include <stdio.h>

int main() {
    int n, k, countk = 0, indexk = 0, flag;
    scanf("%d %d", &n, &k);

    for (int i = 2; i <= k; i++) {
        if (k % i == 0) {
            countk++;
        }
    }

    int nodk[countk];

    for (int j = 2; j <= k; j++) {
        if (k % j == 0) {
            nodk[indexk++] = j;
        }
    }

    for (int m = 2; m <= n; m++) {
        if (n % m == 0) {
            flag = 1;
            for (int g = 0; g < countk; g++) {
                if (nodk[g] == m) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0) {
                continue;
            } else {
                printf("%d\n", m);
            }
        } 
    }
    return 0;
}