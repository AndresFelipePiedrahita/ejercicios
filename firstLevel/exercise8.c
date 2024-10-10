//8. Leer un número entero de dos dígitos y determinar si sus dos dígitos son primos.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int num) {
    // Numbers less than or equal to 1 are not prime
    if (num <= 1) {
        return 0; // Not prime
    }
    
    // Check from 2 to the square root of num
    for (int divisor = 2; divisor <= sqrt(num); divisor++) {
        if (num % divisor == 0) {
            return 0; // Not prime if divisible by another number
        }
    }
    return 1; // Prime if no divisors found
}

int main() {
    int number, first, second;
    printf("Enter a two-digit integer: ");
    scanf("%d", &number);
    first = number / 10;
    second = number % 10;

    if (isPrime(first) && isPrime(second)) {
        printf("Both numbers are prime.\n");
    } else if ((isPrime(first) && !isPrime(second)) || (!isPrime(first) && isPrime(second))) {
        printf("Just one number is prime.\n");
    } else {
        printf("neither is a prime.\n");
    }
    return 0;
}