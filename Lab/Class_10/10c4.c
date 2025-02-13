// WAP to input an array and search 10 elements present in the element. //
#include <stdio.h>

int main() 
{
    int n, i, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) 
    {
        if (arr[i] == 10) 
        {
            found = 1;
            break;
        }
    }
    if (found) 
    {
        printf("10 is present in the array.\n");
    } else {
        printf("10 is NOT present in the array.\n");
    }

    return 0;
}

