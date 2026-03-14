#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (90 <= a && a <= 100) {
        printf("Отлично\n");
    } else if (75 <= a && a < 90) {
        printf("Хорошо\n");
    } else if (60 <= a && a < 75) {
        printf("Удовлетворительно\n");
    } else {
        printf("Неудовлетворительно\n");
    }

    return 0;
}
