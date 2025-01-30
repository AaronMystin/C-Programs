// WAP to take any three integers and find the greatest one.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number (a,b,c): \n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b && a>=c)
    {
        printf("a (%d) is the greater number.\n", a);
    }
    else if (b>=a && b>=c)
    {
        printf("b (%d) is the greater number.\n", b);
    }
    else
    {
        printf("c (%d) is the greater number.\n", c);
    }
   
    return 0;
}