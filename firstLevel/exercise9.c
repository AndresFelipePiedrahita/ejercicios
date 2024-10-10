//9. Leer un número entero de dos dígitos y determinar si un dígito es múltiplo del otro.
#include <stdio.h>
#include <math.h>  // Include math.h for sqrt function

int main() {
    int number, first, second;
    printf("Enter a two-digit integer: ");
    scanf("%d", &number);
    first = number / 10;
    second = number % 10;

    if (first % second == 0){
        printf("%d is a multiple of %d\n", first, second);
    } else if (second % first == 0){
        printf("%d is a multiple of %d\n", second, first);
    } else {
        printf("None of them is a multiple.\n");
    }

    return 0;
}
