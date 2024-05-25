//Employee Mangement system
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100

// Employee structure definition
struct Employee {
    char fname[20];
    char sname[20];
    int age;
    char post[20];
    int ID;
    float T52T;
};

// Global variables
struct Employee employees[MAX_EMPLOYEES];
int employee_count = 0;

// Function prototypes
void Admin(void);
void EmployeeMode(void);
void addEmployee(void);
void viewEmployees(void);
void login(void);

int main(void) {
    char mode;
    printf("=========================\n");
    printf("Employee Mangement System\n");
    printf("=========================\n");

    do {
        printf("For Admin press 1\n");
        printf("For Employee press 2\n");
        printf("To exit press E\n");

        scanf(" %c", &mode);

        switch (mode) {
            case '1':
                Admin();
                break;
            case '2':
                EmployeeMode();
                break;
            case 'E':
            case 'e':
                printf("Exiting ....\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
    } while (mode != 'E' && mode != 'e');

    return 0;
}

void Admin(void) {
    int choice;
    printf("ADMIN MODE\n");

    while (1) {
        printf("1. Add Employee\n");
        printf("2. View Employees\n");
        printf("3. Exit Admin Mode\n");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                viewEmployees();
                break;
            case 3:
                printf("Exiting Admin Mode...\n");
                return;
            default:
                printf("Invalid choice. Returning to main menu.\n");
        }
    }
}

void addEmployee(void) {
    if (employee_count >= MAX_EMPLOYEES) {
        printf("Maximum employee limit reached.\n");
        return;
    }

    struct Employee new_employee;
    printf("Enter first name: ");
    scanf("%19s", new_employee.fname);  // Limiting input length
    printf("Enter second name: ");
    scanf("%19s", new_employee.sname);  // Limiting input length
    printf("Enter age: ");
    scanf("%d", &new_employee.age);
    printf("Enter post: ");
    scanf("%19s", new_employee.post);   // Limiting input length
    printf("Enter ID: ");
    scanf("%d", &new_employee.ID);
    printf("Enter T52T: ");
    printf(" *Trailing 52 weeks Target* ");
    scanf("%f", &new_employee.T52T);

    employees[employee_count++] = new_employee;
    printf("Employee added successfully!\n");
}

void viewEmployees(void) {
    if (employee_count == 0) {
        printf("No employees to display.\n");
        return;
    }

    for (int i = 0; i < employee_count; ++i) {
        printf("Employee %d:\n", i + 1);
        printf("First Name: %s\n", employees[i].fname);
        printf("Second Name: %s\n", employees[i].sname);
        printf("Age: %d\n", employees[i].age);
        printf("Post: %s\n", employees[i].post);
        printf("ID: %d\n", employees[i].ID);
        printf("T52T: %.2f\n", employees[i].T52T);
        printf("\n");
    }
}

void EmployeeMode(void) {
    printf("EMPLOYEE MODE\n");
    login();
}

void login(void) {
    int empID, found = 0;
    printf("Enter your Employee ID: ");
    scanf("%d", &empID);

    for (int i = 0; i < employee_count; ++i) {
        if (employees[i].ID == empID) {
            printf("Employee %d:\n", i + 1);
            printf("First Name: %s\n", employees[i].fname);
            printf("Second Name: %s\n", employees[i].sname);
            printf("Age: %d\n", employees[i].age);
            printf("Post: %s\n", employees[i].post);
            printf("ID: %d\n", employees[i].ID);
            printf("T52T: %.2f\n", employees[i].T52T);
            printf("\n");
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("No record found for Employee ID %d.\n", empID);
    }
}

















