#include<stdio.h>
#include<string.h>
void main()
{
    int i = 0;
    char source[] = "Rohan Shakya";
    char destination[30];
    // strcpy(destination, source);
    // printf("%s\n", source);
    // printf("%s", destination);

    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // for terminating destination string.
    printf("%s", destination);
}