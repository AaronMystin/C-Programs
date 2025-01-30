// WAP to print the following series 0,3,8,……..(n^2-1)

#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter a value for n: ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        printf("%d\n",i*i-1);
    }
    return 0;
}