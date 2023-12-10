//Q17 (b)- Program to calculate total percentage of student marks using struct
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h

#include <stdio.h>

// Define a structure to store student details
struct Student {
    char name[50];
    int marks[5]; // Assuming 5 subjects
    int total;
    float percentage;
};

int main() {
    struct Student student;

    // Input student details
    printf("Enter student name: ");
    scanf("%s", student.name);

    // Input marks for 5 subjects
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &student.marks[i]);
        student.total += student.marks[i];
    }

    // Calculate percentage
    student.percentage = (float)student.total / 5;

    // Display total and percentage marks
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Total Marks: %d\n", student.total);
    printf("Percentage: %.2f%%\n", student.percentage);

    return 0;
}
