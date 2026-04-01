#include <stdio.h>

int remove_negatives(int arr[], int n) {
    int *r = arr;
    int *w = arr;
    while (r < (arr + n)) {
        if (*r >= 0) {
            *w = *r;
            w++;
        }
        r++;
    }
    return w - arr;
}

int main() {
    int arr[] = {1, -4, 9, -5, 17};
    int n = 5;
    int new_n = remove_negatives(arr, n);
    for (int i = 0; i < new_n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0; 
}