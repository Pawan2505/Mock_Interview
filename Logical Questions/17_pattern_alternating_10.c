#include <stdio.h>
int main() {
    int row, col;
    for(row = 1; row <= 5; row++) {
        for(col = 1; col <= row; col++) {
            printf("%d ", col % 2);
        }
        printf("\n");
    }
    return 0;
}
