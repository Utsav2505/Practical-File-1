//Q17 (a)- Program to display array elements using calloc
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Allocate memory for the array using calloc
    arr = (int *)calloc(n, sizeof(int));

    // Check if memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display array elements
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
