//1. Leer un número entero y mostrar todos los enteros comprendidos entre 1 y el número leído.
#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int count = 1; count <= number; count++) {
        printf("%d\n", count);
    }
}