// WAP to input a no. n, the last value of a series then find out the sum of the following series.

#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the last value of the series (n): ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of the series %d is: %d\n", n, sum);
    
    return 0;
}

