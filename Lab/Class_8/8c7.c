#include <stdio.h>

int main() 
{
    int i, j, num = 1;

    for (i = 1; num <= 10; i++) 
    {
        for (j = 1; j <= i && num <= 10; j++) 
        { 
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
