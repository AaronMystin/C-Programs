// Write a program to display the grade system of Kiit University based on total marks secured by a student using switch case statement. //

#include <stdio.h>

int main() {
    int marks, choice;

    // Input marks
    printf("Enter marks secured (0-100): ");
    scanf("%d", &marks);

    // Validate marks range
    if (marks < 0 || marks > 100) {
        printf("Invalid marks entered! Please enter marks between 0 and 100.\n");
        return 0;
    }

    // Calculate grade category
    choice = marks / 10;

    // Switch case for grades
    switch (choice) {
        case 10: // For marks = 100
        case 9:
            printf("Grade obtained: O (Outstanding)\n");
            break;
        case 8:
            printf("Grade obtained: E (Excellent)\n");
            break;
        case 7:
            printf("Grade obtained: A (Very Good)\n");
            break;
        case 6:
            printf("Grade obtained: B (Good)\n");
            break;
        case 5:
            printf("Grade obtained: C (Average)\n");
            break;
        case 4:
            printf("Grade obtained: D (Pass)\n");
            break;
        default:
            printf("Grade obtained: F (Fail)\n");
    }

    return 0;
}
