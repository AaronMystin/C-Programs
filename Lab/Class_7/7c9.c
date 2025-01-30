// WAP to check if the number is a palindrome no. or not. //

#include <stdio.h>
int main()
{
int num, reversed = 0, original, remainder;
printf("Enter a number to check if it's palindrome or not: ");
scanf("%d",&num);
original = num;
while (num!=0)
{
remainder=num%10;
reversed=reversed*10+remainder;
num/=10;
}
if (reversed == original)
{
printf("The number is a palindrome.");
}
else
{
printf("The number is not a palindrome.");
}
return 0;
}
