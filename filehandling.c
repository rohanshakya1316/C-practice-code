#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

// Structure to represent a record
struct Record {
    int id;
    char name[MAX_NAME_LENGTH];
    float salary;
};

// Function prototypes
void createFile();
void addRecord();
void readAndDisplayRecords();
void searchAndDisplayRecord();
void updateRecord();
void deleteRecord();

int main() {
    int choice;

    do {
        // Display menu
        printf("\nText File Operations Menu:\n");
        printf("1. Create File\n");
        printf("2. Add Record\n");
        printf("3. Read and Display Records\n");
        printf("4. Search and Display Record\n");
        printf("5. Update Record\n");
        printf("6. Delete Record\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createFile();
                break;
            case 2:
                addRecord();
                break;
            case 3:
                readAndDisplayRecords();
                break;
            case 4:
                searchAndDisplayRecord();
                break;
            case 5:
                updateRecord();
                break;
            case 6:
                deleteRecord();
                break;
            case 7:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 7.\n");
        }
    } while (choice != 7);

    return 0;
}

void createFile() {
    FILE *file;
    file = fopen("records.txt", "w");
    if (file == NULL) {
        printf("Error creating the file.\n");
        return;
    }
    fclose(file);
    printf("File created successfully.\n");
}

void addRecord() {
    FILE *file;
    struct Record record;

    file = fopen("records.txt", "a");

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
    fprintf(file, "%d %s %.2f\n", record.id, record.name, record.salary);

    fclose(file);
    printf("Record added successfully.\n");
}

void readAndDisplayRecords() {
    FILE *file;
    struct Record record;

    file = fopen("records.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    // Read and display all records from the file
    while (fscanf(file, "%d %s %f", &record.id, record.name, &record.salary) != EOF) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", record.id, record.name, record.salary);
    }

    fclose(file);
}

void searchAndDisplayRecord() {
    FILE *file;
    struct Record record;
    int searchId;

    file = fopen("records.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    // Input the ID to be searched
    printf("Enter the ID to search: ");
    scanf("%d", &searchId);

    // Search for the record with the specified ID
    while (fscanf(file, "%d %s %f", &record.id, record.name, &record.salary) != EOF) {
        if (record.id == searchId) {
            // Display the found record
            printf("ID: %d, Name: %s, Salary: %.2f\n", record.id, record.name, record.salary);
            fclose(file);
            return;
        }
    }

    printf("Record with ID %d not found.\n", searchId);
    fclose(file);
}

void updateRecord() {
    FILE *file, *tempFile;
    struct Record record;
    int updateId, found = 0;

    file = fopen("records.txt", "r");
    tempFile = fopen("temp.txt", "w");

    if (file == NULL || tempFile == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    // Input the ID to be updated
    printf("Enter the ID to update: ");
    scanf("%d", &updateId);

    // Search for the record with the specified ID
    while (fscanf(file, "%d %s %f", &record.id, record.name, &record.salary) != EOF) {
        if (record.id == updateId) {
            // Input new data for the record
            printf("Enter new Name: ");
            scanf("%s", record.name);

            printf("Enter new Salary: ");
            scanf("%f", &record.salary);

            found = 1;
        }
        fprintf(tempFile, "%d %s %.2f\n", record.id, record.name, record.salary);
    }

    fclose(file);
    fclose(tempFile);

    // Remove the original file and rename the temporary file
    remove("records.txt");
    rename("temp.txt", "records.txt");

    if (found) {
        printf("Record updated successfully.\n");
    } else {
        printf("Record with ID %d not found.\n", updateId);
    }
}

void deleteRecord() {
    FILE *file, *tempFile;
    struct Record record;
    int deleteId, found = 0;

    file = fopen("records.txt", "r");
    tempFile = fopen("temp.txt", "w");

    if (file == NULL || tempFile == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    // Input the ID to be deleted
    printf("Enter the ID to delete: ");
    scanf("%d", &deleteId);

    // Search for the record with the specified ID
    while (fscanf(file, "%d %s %f", &record.id, record.name, &record.salary) != EOF) {
        if (record.id == deleteId) {
            found = 1;
        } else {
            fprintf(tempFile, "%d %s %.2f\n", record.id, record.name, record.salary);
        }
    }

    fclose(file);
    fclose(tempFile);

    // Remove the original file and rename the temporary file
    remove("records.txt");
    rename("temp.txt", "records.txt");

    if (found) {
        printf("Record deleted successfully.\n");
    } else {
        printf("Record with ID %d not found.\n", deleteId);
    }
}
