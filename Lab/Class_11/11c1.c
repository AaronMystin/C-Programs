//WAP to display a 5x4 matrix, where the elements are user input. //
#include <stdio.h>
int main() 
{
int arr[5][4];
printf("Enter 20 elements for a 5x4 matrix:\n");
for (int i = 0; i < 5; i++) 
{
for (int j = 0; j < 4; j++) 
{
printf("arr[%d][%d]: ", i, j);
scanf("%d", &arr[i][j]);
}
}
printf("\nThe 5x4 matrix is:\n");
for (int i = 0; i < 5; i++) 
{
for (int j = 0; j < 4; j++) 
{
printf("%d\t", arr[i][j]);
}
printf("\n");
}

return 0;
}


