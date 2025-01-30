// WAP to find the largest between two numbers.

#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter a number (a)= ");
    scanf("%f",&a);
    printf("Enter a another number (b)= ");
    scanf("%f",&b);
    if (a>b)
    {
        printf("a is the greater number.\n");
    }
    else if (b>a)
    {
        printf("b is the greater number.\n");
    }
    else
    {
        printf("Both numbers are equal.\n");
    }

    return 0;
}