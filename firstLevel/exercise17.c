//17. Leer un número entero de tres dígitos y determinar en qué posición está el mayor dígito.

#include <stdio.h>

int main() {
    int number, digit, maxDigit = 0, maxPosition = 0;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    digit = number % 10;
    if (digit > maxDigit) {
        maxDigit = digit;
        maxPosition = 3;
    }
    number /= 10;
    digit = number % 10;
    if (digit > maxDigit) {
        maxDigit = digit;
        maxPosition = 2;
    }
    number /= 10;
    digit = number % 10;
    if (digit > maxDigit) {
        maxDigit = digit;
        maxPosition = 1;
    }
    printf("The largest digit is %d and is in position %d.\n", maxDigit, maxPosition);
    return 0;
}