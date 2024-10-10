/*13. Leer dos números enteros de dos dígitos y determinar si la suma de los dos números origina un número par.*/

#include <stdio.h>
int main()
{
    int a,b;
    printf("Ingrese dos numeros enteros de dos digitos: ");
    scanf("%d %d",&a,&b);
    if(a+b%2==a) printf("El numero es par\n");
    else printf("El numero es impar\n");
    return 0;
}