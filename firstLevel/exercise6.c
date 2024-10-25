//6. Leer un número entero de dos dígitos menor que 20 y determinar si es primo.
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
	printf("Welcome to the program that determines if a number of two digits less to 20 is prime\n");
    setlocale(LC_ALL, "en_US.UTF-8");
    int number;

    // Pedir al usuario un número entero menor a 20
    printf("Enter a number of two digits less to 20: ");
    scanf("%d", &number);

    // Verificar que el número esté entre 10 y 19
    if (number >= 10 && number < 20) {
        // Verificar si el número es primo
        if (isPrime(number)) {
            printf("The number %d is prime.\n", number);
        } else {
            printf("The number %d isn't prime.\n", number);
        }
    } else {
        printf("Invalid number (must be two digits and be less to 20).\n");
    }

    return 0;
}
