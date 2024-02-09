#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int result = sumOfNaturalNumbers(n);

    printf("Sum of first %d natural numbers: %d\n", n, result);

    return 0;
}
