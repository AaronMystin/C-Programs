#include<stdio.h>
int main()
{
int total_seconds, hour, minute, second;
printf("Total number in seconds = ");
scanf("%d",&total_seconds);
hour=total_seconds/3600;
total_seconds%=3600;
minute=total_seconds/60;
second=total_seconds%60;
printf("Equivalent Time : %d Hour(s), %d Minute(s), %d Second(s)\n", hour, minute, second);
return 0;
}
