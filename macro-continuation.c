// macro continuation operator (\)
// stringize operator (#)
#include<stdio.h>
#define message(a, b) \
    printf(#a" and " #b": i love you!\n")
void main()
{
    message(father, mother);
}
