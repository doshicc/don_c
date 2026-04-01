#include <stdio.h>

int main() {    
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            int result = i * j;
            if (result > 50) {
                continue;   
            }
            printf("%d × %d = %2d  ", i, j, result);
        }
        printf("\n");   
    }
    return 0;
}