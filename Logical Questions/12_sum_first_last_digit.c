#include <stdio.h>

int main() {
    int num, first, last, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Get last digit
    last = temp % 10;

    // Get first digit
    while(temp >= 10) {
        temp /= 10;
    }
    first = temp;

    printf("Sum of first and last digits of %d is %d\n", num, first + last);

    return 0;
}
