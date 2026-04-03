#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    file = fopen("file.txt", "w");

    if (file != NULL) {
        printf("файл открылся\n");
    } else {
        printf("ошибка\n");
        return 1;
    }
    fclose(file);
    return 0;
}