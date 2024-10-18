//16. Leer un número entero de tres dígitos y determinar si al menos dos de sus tres dígitos soniguales.

#include <stdio.h>
int main() {
    int number, first, second, third;
    printf("Enter a three-digit integer: ");
    scanf("%d", &number);
    first = number / 100;
    second = (number / 10) % 10;
    third = number % 10;
    if (first == second || first == third || second == third) {
        printf("The number has at least two equal digits.\n");
    } else {
        printf("The number does not have at least two equal digits.\n");
    }
    return 0;
}