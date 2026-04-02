#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int size, a, b;

    scanf("%d", &size);
    arr = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);  
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    scanf("%d %d", &a, &b);

    int *arr2 = (int*)realloc(arr, (size + 1) * sizeof(int));
    arr = arr2;
    for (int i = size; i > b; i--) {
        arr[i] = arr[i - 1];
    }

    arr[b] = a;

    for (int i = 0; i < size + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}