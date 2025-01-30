// while loop
#include<stdio.h>
int main()
{
int i=1;
while(i<=5)
{
int j=1;
while (j<=i)
{
printf("%d",j);
j=j+1;
}
printf("\n");
i=i+1;
}
return 0;
}

