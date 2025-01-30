#include<stdio.h>
int main()
{
float s1,s2,s3,s4,s5,sum,avg,per;
printf("Enter Marks of Subject 1 = ");
scanf("%f",&s1);
printf("Enter Marks of Subject 2 = ");
scanf("%f",&s2);
printf("Enter Marks of Subject 3 = ");
scanf("%f",&s3);
printf("Enter Marks of Subject 4 = ");
scanf("%f",&s4);
printf("Enter Marks of Subject 5 = ");
scanf("%f",&s5);
sum = s1+s2+s3+s4+s5;
avg = (sum)/5;
per = (sum/500)*100;
printf("Average marks is %.2f\n", avg);
printf("Percentage is %.2f%%\n", per);

return 0;
}
