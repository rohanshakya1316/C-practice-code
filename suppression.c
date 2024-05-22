#include<stdio.h>
void main()
{
    int a = 0, b = 0, c = 0;
    printf("enter three numbers:");
    scanf("%d %*d %d",&a,&b,&c);
    printf("%d %d %d", a, b, c);
}