#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int result = sumOfNaturalNumbers(n);

    printf("Sum of first %d natural numbers: %d\n", n, result);

    return 0;
}
