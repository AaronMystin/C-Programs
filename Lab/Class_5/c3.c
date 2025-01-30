// WAP to take input to check wheatre is +ve or -ve or 0.

#include <stdio.h>
int main()
{
    float a;
    printf("Enter a number (a)= ");
    scanf("%f",&a);
    if (a>0)
    {
        printf("The number is postive.\n");
    }
    else if (a<0)
    {
        printf("The number is negative.");
    }
    else
    {
        printf("The number is zero.\n");
    }

    return 0;
}