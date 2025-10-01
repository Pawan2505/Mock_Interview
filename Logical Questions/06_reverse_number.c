#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        remainder = num % 10;        // Get last digit
        reversed = reversed * 10 + remainder; // Append digit to reversed
        num /= 10;                   // Remove last digit
    }

    printf("Reversed number is: %d\n", reversed);

    return 0;
}
