//3. Leer un número entero y mostrar todos los divisores exactos del número comprendidos entre 1
#include <stdio.h>

int main(){
    printf("Welcome to the program that shows all the divisors of the number you enter\n");
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int divisor = 1; divisor <= number; divisor++) {
        if (number % divisor == 0) {
            printf("%d\n", divisor);
        }
    }
}