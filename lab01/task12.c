#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int hundreds = number / 100;           
    int tens = (number / 10) % 10;         
    int units = number % 10;                
    printf("Сотни: %d\n", hundreds);
    printf("Десятки: %d\n", tens);
    printf("Единицы: %d\n", units);
    
    return 0;
}