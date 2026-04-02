#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int size, index;

    scanf("%d", &size);
    arr = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);  
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    scanf("%d", &index);

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    int *arr2 = (int*)realloc(arr, (size - 1) * sizeof(int));
    arr = arr2;
    for (int i = 0; i < size - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}