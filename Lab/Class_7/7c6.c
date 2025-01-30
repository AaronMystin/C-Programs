// WAP to find a factorial of a no. //

#include <stdio.h>
int main()
{
    int n, i, factorial=1;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);
    if (n<1)
    { 
    printf("Factorial for a -ve no. does'nt exists\n");
    }
    else
    {
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The factorial of the number %d is: %d\n", n, factorial);
    }
    
    return 0;
}


