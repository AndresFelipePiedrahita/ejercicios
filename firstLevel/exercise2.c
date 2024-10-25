//2. Leer un número entero y determinar si tiene 3 dígitos.
#include <stdio.h>

int main(){
    printf("Welcome to the program that determines if a number has 3 digits\n");
    int numberUser;
    printf("Enter a number: ");
    scanf("%d", &numberUser);
    if ((numberUser > 99 && numberUser < 1000) || (numberUser < -99 && numberUser > -1000) ) {
        printf("The number %d, have 3 digits", numberUser);
    } else {
        printf("The number %d, don't have 3 digits", numberUser);
    }
    return 0;
}