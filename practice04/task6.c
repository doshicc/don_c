#include <stdio.h>

void inc_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        *(arr + i) = arr[i] + 1; 
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    inc_array(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}