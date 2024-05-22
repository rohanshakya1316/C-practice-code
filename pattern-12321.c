/* print the pattern
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/
#include <stdio.h>

void main()
{
    int rows = 5; // Number of rows in the pattern
    int spaces, numbers;

    for (int i = 1; i <= rows; i++) 
    {
        // Print spaces
        for (spaces = 1; spaces <= rows - i; spaces++) 
        {
            printf("   ");
        }

        // Print ascending numbers
        for (numbers = 1; numbers <= i; numbers++) 
        {
            printf("%d  ", numbers);
        }

        // Print descending numbers (excluding 1 for the middle row)
        for (numbers = i - 1; numbers >= 1; numbers--) 
        {
            printf("%d  ", numbers);
        }

        // Move to the next line
        printf("\n");
    }
}
