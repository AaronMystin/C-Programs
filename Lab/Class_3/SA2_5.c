#include <stdio.h>
int main()
{
float a,b,temp;
printf("Enter first number = ");
scanf("%f", &a);
printf("Enter second number = ");
scanf("%f", &b);
temp = a;
a = b;
b = temp;
printf("After swapping\n");
printf("%f\n",a);
printf("%f\n",b);
return 0;
}
