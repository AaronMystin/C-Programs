#include<stdio.h>
int main()
{
int i;
i=1;
while(i<=4)
{ 
printf("Week is %d\n",i);
int j=1;
while (j<=7)
{
printf("\t Day is %d\n",j);
j=j+1;
}
i=i+1;
}
return 0;
}
