// C program to show use of 
// call by Reference
#include <stdio.h>

void swap(int*, int*);

// Driver code
int main()
{
	int var1 = 3, var2 = 2;
	printf("Before swap var1 = %d, var2 = %d\n",var1, var2);
	swap(&var1, &var2);
	printf("After swap var1 = %d, var2 = %d",var1, var2);
	return 0;
}

void swap(int *var1, int *var2)
{
	int temp = *var1;
	*var1 = *var2;
	*var2 = temp;
}