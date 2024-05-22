#include<stdio.h>
void main()
{
    char choice, name[40];
    int age;
    float height;
    FILE *fptr;
    fptr = fopen("filehandling_1text.txt", "w");
    do
    {
        fflush(stdin);
        printf("Enter the name: ");
        scanf("%s", name);
        printf("Enter age: ");
        scanf("%d", &age);
        printf("Enter height: ");
        scanf("%f", &height);
        fflush(stdin);
        printf("Do you want to continue (Y/N): ");
        scanf("%c", &choice);
        fprintf(fptr, "%s\t %d\t %f\n", name, age, height);
    } while (choice == 'Y' || choice == 'y');
    fclose(fptr);
    fptr = fopen("filehandling_1text.txt", "r");
    printf("Name\t Age\t Height\n");
    while (fscanf(fptr, "%s %d %f", name, &age, &height) != EOF)
    {
        printf("%s\t %d\t %.2f\n");
        fflush(stdout);
    }
    fclose(fptr);
    
}