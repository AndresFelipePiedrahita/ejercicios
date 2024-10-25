//12. Leer dos números enteros de dos dígitos y determinar si tienen dígitos comunes.

#include <stdio.h>
int main(){
	printf("Welcome to the program that determines if two numbers of two digits have common digits\n");
	int number1, number2, first1, first2, second1, second2;
    printf("Enter a two-digit integer: ");
    scanf("%d", &number1);
    printf("Enter another two-digit integer: ");
    scanf("%d", &number2);
    first1 = number1 / 10;
    first2 = number1 % 10;
    second1 = number2 / 10;
    second2 = number2 % 10;
    if (first1 == second1 || first2 == second2 || first1 == first2 || second1 == second2 || first1 == second2 || first2 == second1) {
        printf("The numbers have common digits.\n");
    } else {
        printf("The numbers do not have common digits.\n");
    }
    return 0;
}