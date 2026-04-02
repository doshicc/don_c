#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int *arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int *arr2 = (int*)realloc(arr, m * sizeof(int));
    arr = arr2;

    for (int i = n; i < m; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int *arr3 = (int*)realloc(arr, n * sizeof(int));
    arr = arr3;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}