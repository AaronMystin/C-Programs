#include<stdio.h>
int main()
{
int i;
i=1;
while(i<=4)
{ 
printf("Student no. %d\n",i);
int j=1;
while (j<=5)
{
printf("\t Subject is %d\n",j);
j=j+1;
}
i=i+1;
}
return 0;
}
