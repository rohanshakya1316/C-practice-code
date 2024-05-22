#include<stdio.h>
#define N 100
float avg(float [], int);
void main()
{
    int i, n;
    float num[N], average; // size of array num[] is N * 4 (being float = 4 bytes)
    printf("Enter the size of the array:");
    scanf("%d", &n);
    printf("Enter %d float numbers:",n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &num[i]);
    }
    average = avg(num, n);
    printf("The average of the entered numbers is %f.\n", average);
}

float avg(float a[], int size)
{
    int i;      // size of array a[] is  4 (being float = 4 bytes) because in fxn definition array receives base address.
    float sum = 0.0; 
    for (i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return (sum / size);

}