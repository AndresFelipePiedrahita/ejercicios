// 11. Leer dos números enteros y determinar cuál es el mayor.
#include <stdio.h>
int main(){
	printf("Welcome to the program that determines which of two numbers is greater\n");
	int number1, number2;
	printf("Enter a number: ");
	scanf("%d", &number1);
	printf("Enter another number: ");
	scanf("%d", &number2);
	if (number1 > number2)
	{
		printf("The greater number is: %d", number1);
	}
	else
	{
		printf("The greater number is: %d", number2);
	}
	return 0;
}