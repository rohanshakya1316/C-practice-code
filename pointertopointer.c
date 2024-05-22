#include<stdio.h>
void main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;  // pointer to pointer
    int ***r = &q;
    *p = 12;       // value at address p change to 12 i.e. 10 changes to 12.
    **q = 18;       // value at address q to at address p change to 18 i.e. 12 changes to 18.
    printf("a = %d. \n", a);
    printf("a = %d. \n", *p);
    printf("a = %d. \n", **q);
    printf("a = %d. \n", ***r);
    printf("address of a = %x, %x.\n", &a, p);
    printf("address of p = %x, %x.\n", q, &p);
    printf("address of q = %x, %x.\n", &q, r);
    printf("address of r = %x.\n", &r);

}