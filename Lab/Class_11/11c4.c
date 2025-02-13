#include <stdio.h>

int main() {
    int arr[5][4];

    // Taking user input
    printf("Enter 20 elements for a 5x4 matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display in Row-Major Order (RMO)
    printf("\nRow-Major Order (RMO):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", arr[i][j]);
        }
    }
    
    // Display in Column-Major Order (CMO)
    printf("\n\nColumn-Major Order (CMO):\n");
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 5; i++) {
            printf("%d\t", arr[i][j]);
        }
    }
    
    return 0;
}

