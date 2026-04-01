#include <stdio.h>
#include <math.h>

int main() { 
    int n, b, a, count = 0, res = 1, c;
    scanf("%d", &n);
    c = n;
    while (c > 0) {
        c /= 10;
        count++;
    }
    while (n > 0) {
        count--;
        b = n % 10;
        a = n / (int)pow(10, count);
        n = n % (int)pow(10, count);
        n /= 10;
        count--;
        if (a != b) {
            res = 0;
            break;
        } else {
            continue;
        }
    }
    if (res == 1) {
        printf("да\n");
    } else {
        printf("нет\n");
    }
    return 0;
}