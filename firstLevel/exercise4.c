//4. Leer un número entero de dos dígitos y determinar a cuánto es igual la suma de sus dígitos.
#include <stdio.h>

int main() {
	int numberUser, firstNumber, secondNumber, sum=0;
	printf("Enter a number of two digits: ");
	scanf("%d", &numberUser);
    secondNumber = numberUser % 10;
    firstNumber = numberUser / 10;
	sum = firstNumber + secondNumber;
    printf("The sum of the digits is: %d", sum);
	return 0;
}