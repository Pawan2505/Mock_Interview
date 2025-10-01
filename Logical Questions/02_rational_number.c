#include <stdio.h>

int main() {
    int numerator, denominator;

    printf("Enter numerator: ");
    scanf("%d", &numerator);

    printf("Enter denominator (not zero): ");
    scanf("%d", &denominator);

    if(denominator == 0) {
        printf("Denominator cannot be zero.\n");
    } else {
        printf("The rational number is: %d/%d\n", numerator, denominator);
    }

    return 0;
}
