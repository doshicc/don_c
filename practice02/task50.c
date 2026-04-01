#include <stdio.h>

int main() {
    int n, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, s8 = 0, s9 = 0;
    scanf("%d", &n);
    while (n > 0) {
        if (n % 10 == 0) {
            s0++;
            n /= 10;
        } else if (n % 10 == 1) {
            s1++;
            n /= 10;
        } else if (n % 10 == 2) {
            s2++;
            n /= 10;
        } else if (n % 10 == 3) {
            s3++;
            n /= 10;
        } else if (n % 10 == 4) {
            s4++;
            n /= 10;
        } else if (n % 10 == 5) {
            s5++;
            n /= 10;
        } else if (n % 10 == 6) {
            s6++;
            n /= 10;
        } else if (n % 10 == 7) {
            s7++;
            n /= 10;
        } else if (n % 10 == 8) {
            s8++;
            n /= 10;
        } else if (n % 10 == 9) {
            s9++;
            n /= 10;
        }
    }
    printf(" 0: %d\n 1: %d\n 2: %d\n 3: %d\n 4: %d\n 5: %d\n 6: %d\n 7: %d\n 8: %d\n 9: %d\n", s0, s1, s2, s3, s4, s5, s6, s7, s8, s9);
    return 0;
}