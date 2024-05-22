//Display the Armstrong number between 100 to 1000 and also count them
#include <stdio.h>
#include <math.h>
void main()
{
    int lowerLimit = 100;
    int upperLimit = 1000;
    int count = 0, digit;
    printf("Armstrong numbers between %d and %d are:\n", lowerLimit, upperLimit);
    for (int num = 100; num <= 1000; num++) 
    {
        int originalNum = num;
        int n = 0, sum = 0;
        while (originalNum != 0 )
        {
            originalNum /= 10;
            n++;
        }
        originalNum = num;
        while (originalNum != 0)
        {
            digit = originalNum % 10;
            sum += pow(digit, n);
            originalNum /= 10;
        }
        if (sum == num)
        {
            printf("%d ", num);
            count++;
        }
    }
    printf("\nTotal Armstrong numbers: %d\n", count);
}