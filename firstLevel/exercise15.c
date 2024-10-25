// 15. Leer un número entero de tres dígitos y determinar a cuánto es igual la suma de sus dígitos.

#include <stdio.h>
int main(){
    printf("Welcome to the program that determines the sum of the digits of a number of three digits\n");
    int number, first, second, third;
    printf("Enter a three-digit integer: ");
    scanf("%d", &number);
    first = number / 100;
    second = (number / 10) % 10;
    third = number % 10;
    printf("The sum of the digits is %d\n", first + second + third);
    return 0;
}