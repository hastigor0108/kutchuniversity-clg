/*
Total subjects = 7
Marks out of 100 for each subject
Calculate total marks
Calculate percentage
Assign grade using if statements
*/
#include <stdio.h>

int main() {
    int marks[7], total = 0;
    float percentage;
    int i;

    // Input marks
    printf("Enter marks for 7 subjects (out of 100):\n");
    for (i = 0; i < 7; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100) { // validation
            printf("Invalid marks! Enter between 0 and 100.\n");
            return 1;
        }
        total += marks[i];
    }

    // Calculate percentage
    percentage = (total / 700.0) * 100;

    // Output
    printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f%%", percentage);

    // Find grade using if
    if (percentage >= 90) {
        printf("\nGrade: A+");
    } else if (percentage >= 80) {
        printf("\nGrade: A");
    } else if (percentage >= 70) {
        printf("\nGrade: B");
    } else if (percentage >= 60) {
        printf("\nGrade: C");
    } else if (percentage >= 50) {
        printf("\nGrade: D");
    } else {
        printf("\nGrade: Fail");
    }

    return 0;
}
