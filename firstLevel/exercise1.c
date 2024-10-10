//1. Leer un número entero y determinar si es un número terminado en 4.
#include <stdio.h>

int main() {
    int numberUser;
    printf("Enter a number: ");
    scanf("%d", &numberUser);
    if (numberUser % 10 == 4) {
    printf("The number %d, is a number that ends in 4", numberUser);
    } else {
    printf("The number %d, is'n a number that ends in 4", numberUser);
    }
    return 0;
}