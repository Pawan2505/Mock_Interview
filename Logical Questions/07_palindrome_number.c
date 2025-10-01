#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // Store original number

    while(num != 0) {
        remainder = num % 10;           // Get last digit
        reversed = reversed * 10 + remainder; // Append to reversed
        num /= 10;                      // Remove last digit
    }

    if(original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
