#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("First %d natural numbers are: ", n);
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
