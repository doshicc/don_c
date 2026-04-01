#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int count = 0;

    fgets(str, sizeof(str), stdin);

    ptr = str;
    while (*ptr != '\0' && *ptr != '\n') {
        count++;
        ptr++;
    }
    printf("%d\n", count);
    return 0;
}