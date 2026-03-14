#include <stdio.h>

int main() {
    char *a = "Hello, World!";
    printf("Значение %s, адрес %p\n", a, (void*)&a);
    return 0;
}

