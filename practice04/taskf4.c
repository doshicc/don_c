#include <stdio.h>

int filter(int arr[], int n, int (*pred)(int)) {
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (pred(arr[i]) == 1) {
            arr[index++] = arr[i];
        }
    }
    return index;
}

int is_even(int x) {
    if (x % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    printf("new: %d\n", filter(arr, n, is_even));
}