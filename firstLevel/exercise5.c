//5. Leer un número entero de dos dígitos y determinar si ambos dígitos son pares.
#include <stdio.h>

int main() {
	int numberUser, firstNumber, secondNumber;
	printf("Enter a number of two digits: ");
	scanf("%d", &numberUser);
    secondNumber = numberUser % 10;
    firstNumber = numberUser / 10;
    if (secondNumber % 2 == 0 && firstNumber % 2 == 0) {
        printf("Both numbers are even");
    } else if (
        secondNumber % 2 == 0 || firstNumber % 2 == 0) {
        printf("Just one number is even");
    } else {
        printf("none number is even");
    }
	return 0;
}