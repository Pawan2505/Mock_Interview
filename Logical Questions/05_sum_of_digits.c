#include <stdio.h>

int main() {
    int num, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0) {
        sum += temp % 10;  // Extract last digit and add to sum
        temp /= 10;        // Remove last digit
    }

    printf("Sum of digits of %d is %d\n", num, sum);

    return 0;
}
