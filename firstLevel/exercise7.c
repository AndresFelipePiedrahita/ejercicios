//7. Leer un número entero de dos dígitos y determinar si es primo y además si es negativo.
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <math.h>

// Función para verificar si un número es primo
int isPrime(int num) {
    // Los números menores o iguales a 1 no son primos
    if (num <= 1) {
        return 0;
    }
    
    // Recorre desde 2 hasta la raíz cuadrada de num
    for (int divisor = 2; divisor <= sqrt(num); divisor++) {
        if (num % divisor == 0) {
            return 0; // No es primo si es divisible por otro número
        }
    }
    return 1; // Es primo si no encuentra divisores
}

int main(){
	printf("Welcome to the program that determines if a number of two digits is prime and if it is negative\n");
    setlocale(LC_ALL, "en_US.UTF-8");
    int number;

    // Pedir al usuario un número entero de dos dígitos
    printf("Enter a two-digit integer: ");
    scanf("%d", &number);

    // Verificar si el número es negativo
    if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is positive.\n");
    }

    // Verificar si el número es primo
    int absNumber = (number < 0) ? -number : number;  // Convertir a positivo si es negativo
    if (absNumber >= 10 && absNumber <= 99) {
        if (isPrime(absNumber)) {
            printf("The number %d is a prime.\n", number);
        } else {
            printf("The number %d is not a prime.\n", number);
        }
    } else {
        printf("The number does not have two digits.\n");
    }

    return 0;
}
