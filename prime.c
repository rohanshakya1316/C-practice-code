#include <stdio.h>

int main() {
    int num;
    int isPrime = 1; // Assume the number is prime initially

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Neither prime nor composite.\n");
        return 1;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0; // It's composite
            break; // No need to continue checking
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is a composite number.\n", num);
    }

    return 0;
}
