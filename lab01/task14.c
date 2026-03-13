#include <stdio.h>

int main() {
    int a, b, c;
    printf("a: %p\n", (void*)&a); // адреса выводятя в таком странном формате потому что это шестандцатиричный код
    printf("b: %p\n", (void*)&b);
    printf("c: %p\n", (void*)&c);
    printf("b - a = %ld байт\n", (char*)&b - (char*)&a); // b - a = -4 потому что переменная b находится на 4 байта раньше (если так можно сказать), а именно 4, потому что int занимает 4 байта
    printf("c - b = %ld байт\n", (char*)&c - (char*)&b);
    printf("c - a = %ld байт\n", (char*)&c - (char*)&a);
    
    return 0;
}