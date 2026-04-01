#include <stdio.h>

void map(int arr[], int n, int (*f)(int)) {
    for (int i = 0; i < n; i++) {
        arr[i] = f(arr[i]);  
    }
}

int f(int n) {
    n++;
    return n;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int n = 5;
    map(arr, n, f);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}