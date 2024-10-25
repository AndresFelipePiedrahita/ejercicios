/*13. Leer dos números enteros de dos dígitos y determinar si la suma de los dos números origina un número par.*/

#include <stdio.h>
int main(){
	printf("Welcome to the program that determines if the sum of two numbers of two digits is even\n");
    int a,b;
    printf("Enter two two-digit integers: ");
    scanf("%d %d",&a,&b);
    if(a+b%2==a) printf("The number is even\n");
    else printf("The number is odd\n");
    return 0;
}