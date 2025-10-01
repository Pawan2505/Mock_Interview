#include <stdio.h>

int main() {
    int num, temp, first, last, middleSum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Remove last digit
    last = temp % 10;
    temp /= 10;

    // Remove digits until only first digit left
    while (temp >= 10) {
        middleSum += temp % 10;  // add middle digit
        temp /= 10;
    }

    first = temp;  // store first digit

    if (num < 100) {
        printf("No middle digits in %d\n", num);
    } else {
        printf("Sum of middle digits of %d is %d\n", num, middleSum);
    }

    return 0;
}
