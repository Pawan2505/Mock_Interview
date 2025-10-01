#include <stdio.h>
int main() {
    int row, col, space;
    for(row = 1; row <= 5; row++) {
        for(space = 1; space < row; space++) {
            printf(" ");
        }
        for(col = row; col <= 5; col++) {
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}
