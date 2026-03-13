#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int last_digit = number % 10;
    printf("%d \n", last_digit);
    
    return 0;
}