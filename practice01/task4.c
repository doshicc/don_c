#include <stdio.h>

int main() {
    int a = 8000;
    printf("%d - %p\n", a, (void*)&a);
    return 0;
}

