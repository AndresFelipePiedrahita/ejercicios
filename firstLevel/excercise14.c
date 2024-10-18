//14. Leer dos números enteros de dos dígitos y determinar a cuánto es igual la suma de todos los dígitos.

#include <stdio.h>
int main() {
    int number1, number2, first1, first2, second1, second2;
    printf("Enter a two-digit integer: ");
    scanf("%d", &number1);
    printf("Enter another two-digit integer: ");
    scanf("%d", &number2);
    first1 = number1 / 10;
    first2 = number1 % 10;
    second1 = number2 / 10;
    second2 = number2 % 10;
    printf("The sum of all the digits is %d\n", first1 + first2 + second1 + second2);
    return 0;
}