#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e;

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter employee name: ");
    scanf("%49s", e.name);

    printf("Enter employee salary: ");
    scanf("%f", &e.salary);

    printf("\nEmployee Information\n");
    printf("Employee ID: %d\n", e.id);
    printf("Employee Name: %s\n", e.name);
    printf("Employee Salary: %.2f\n", e.salary);

    return 0;
}
