#include<stdio.h>
int main()
{
int arr[5]={10,20,30,40,50}, sum=0, i;
for (i=0;i<5;i++)
{
sum=sum+arr[i];
}
printf("Sum = %d\n",sum);

return 0;
}
