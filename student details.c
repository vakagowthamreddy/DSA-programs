#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    printf("Enter student roll number: ");
    scanf("%d", &s.rollno);

    printf("Enter student name: ");
    scanf("%49s", s.name);

    printf("Enter student marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}