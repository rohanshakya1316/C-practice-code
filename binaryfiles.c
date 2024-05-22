#include <stdio.h>
#include <stdlib.h>

// Structure to represent a record
struct Record {
    int id;
    char name[50];
    float salary;
};

// Function prototypes
void writeToFile();
void readFromFile();
void modifyFile();

int main() {
    int choice;

    do {
        // Display menu
        printf("\nBinary File Operations Menu:\n");
        printf("1. Write to File\n");
        printf("2. Read from File\n");
        printf("3. Modify File\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                modifyFile();
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    } while (choice != 4);

    return 0;
}

void writeToFile() {
    FILE *file;
    struct Record record;

    file = fopen("records.bin", "ab");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    // Input data for a record
    printf("Enter ID: ");
    scanf("%d", &record.id);

    printf("Enter Name: ");
    scanf("%s", record.name);

    printf("Enter Salary: ");
    scanf("%f", &record.salary);

    // Write the record to the file
    fwrite(&record, sizeof(struct Record), 1, file);

    fclose(file);
}

void readFromFile() {
    FILE *file;
    struct Record record;

    file = fopen("records.bin", "rb");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    // Read and display all records from the file
    while (fread(&record, sizeof(struct Record), 1, file) == 1) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", record.id, record.name, record.salary);
    }

    fclose(file);
}

void modifyFile() {
    FILE *file;
    struct Record record;
    int searchId;

    file = fopen("records.bin", "r+b");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    // Input the ID to be modified
    printf("Enter the ID to modify: ");
    scanf("%d", &searchId);

    // Search for the record with the specified ID
    while (fread(&record, sizeof(struct Record), 1, file) == 1) {
        if (record.id == searchId) {
            // Input new data for the record
            printf("Enter new Name: ");
            scanf("%s", record.name);

            printf("Enter new Salary: ");
            scanf("%f", &record.salary);

            // Move the file pointer back to the beginning of the record
            fseek(file, -sizeof(struct Record), SEEK_CUR);

            // Write the modified record back to the file
            fwrite(&record, sizeof(struct Record), 1, file);

            printf("Record modified successfully.\n");
            fclose(file);
            return;
        }
    }

    printf("Record with ID %d not found.\n", searchId);
    fclose(file);
}
