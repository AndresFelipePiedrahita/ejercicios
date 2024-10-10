//11. Leer dos números enteros y determinar cuál es el mayor.
#include <stdio.h>
int main(){
	int number1,number2;
	printf("Enter a number: ");
	scanf("%d",&number1);
	printf("Enter another number: ");
	scanf("%d",&number2);
	if(number1>number2) printf("El mayor es: %d",number1);
	else printf("El mayor es: %d",number2);
	return 0;  
}