//3. Leer un número entero y determinar si es negativo.
#include <stdio.h>

int main(){
	printf("Welcome to the program that determines if a number is negative\n");
	int numberUser;
	printf("Enter a number: ");
	scanf("%d", &numberUser);
    if (numberUser < 0)
    {
        printf("The number is negative");
    } else {
        printf("The number is positive");
    }
    return 0;
}
