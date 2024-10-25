//2. Leer un número entero y mostrar todos los pares comprendidos entre 1 y el número leído.
#include <stdio.h>

int main(){
    printf("Welcome to the program that shows all the even numbers between 1 and the number you enter\n");
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int count = 1; count <= number; count++) {
        if (count % 2 == 0) {
            printf("%d\n", count);
        }
    }
    return 0;
}