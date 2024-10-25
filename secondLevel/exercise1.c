//1. Leer un número entero y mostrar todos los enteros comprendidos entre 1 y el número leído.
#include <stdio.h>

int main(){
    printf("Welcome to the program that shows all the integers between 1 and the number you enter\n");
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int count = 1; count <= number; count++) {
        printf("%d\n", count);
    }
}