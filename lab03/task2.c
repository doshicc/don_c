#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int size;

    scanf("%d", &size);
    arr = (int*)calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}