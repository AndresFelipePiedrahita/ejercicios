//10. Leer un número entero de dos dígitos y determinar si los dos dígitos son iguales.
#include <stdio.h>
#include <math.h>  // Include math.h for sqrt function

int main() {
    int number, first, second;
    printf("Enter a two-digit integer: ");
    scanf("%d", &number);
    first = number / 10;
    second = number % 10;

    if (first == second){
        printf("%d is equal to %d\n", first, second);
    } else {
        printf("%d is not equal to %d.\n", first, second);
    }

    return 0;
}