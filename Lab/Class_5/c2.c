// WAP to input a number and check wheater it is a even no or a odd number.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number (a)= ");
    scanf("%d",&a);
    if (a % 2 == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }    
    return 0;
}