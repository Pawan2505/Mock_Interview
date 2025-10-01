#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count number of digits
    while (original != 0) {
        original /= 10;
        n++;
    }

    original = num;

    // Calculate sum of digits raised to power n
    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, n);
        original /= 10;
    }

    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
