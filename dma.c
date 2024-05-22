#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *numbers, sum = 0, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    numbers = (int*)malloc(n * sizeof(int));

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < n; i++) {
        sum += numbers[i];
    }

    printf("Sum: %d\n", sum);

    free(numbers);

    return 0;
}
