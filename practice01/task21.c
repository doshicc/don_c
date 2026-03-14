#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    scanf("%c", &a);
    if (isdigit(a)) {
        printf("это число \n");
    } else if (isalpha(a)) {
        printf("это буква \n");
    } else {
        printf("это другой символ \n");
    }
    return 0;
}
