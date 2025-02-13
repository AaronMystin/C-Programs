#include <stdio.h>

int main() {
    int arr[5][4], sum = 0;

    // Taking user input
    printf("Enter 20 elements for a 5x4 matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j]; // Adding elements to sum
        }
    }

    // Displaying the sum
    printf("\nSum of all elements: %d\n", sum);
    return 0;
}
