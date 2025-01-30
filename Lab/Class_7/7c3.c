// WAP to print the following series 1,3,5,……..n (user input) //

#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter a value for n: ");
    scanf("%d",&n);
    for (i=1; i<=n; i+=2)
    {
        printf("%d\n",i);
    }
    return 0;
}