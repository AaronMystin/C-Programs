// WAP to display the grade system of KIIT Univeristy based on  total marks secured by a student in a semester, use else if ladder to solve this.

#include<stdio.h>
int main()
{
    char grade;
    int marks;
    printf("Enter Your marks = ");
    scanf("%d", &marks);
    if (marks > 90)
    {
        printf("grade = 'O'");
    }
    else if (marks > 80)
    {
        printf("grade = 'E'");
    }
    else if (marks > 70)
    {
        printf("grade = 'A'");
    }
    else if (marks > 60)
    {
        printf("grade = 'B'");
    }
    else if (marks > 50)
    {
        printf("grade = 'C'");
    }
    else if (marks > 40)
    {
        printf("grade = 'D'");
    }
    else 
    {
        printf("FAIL");
    }

    return 0;
}
