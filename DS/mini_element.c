#include <stdio.h>

int main() {
    int n, i, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Logic to find minimum
    // Start by assuming the first element is the smallest
    min = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i]; // Update min if a smaller value is found
        }
    }

    printf("\nThe minimum element in the array is: %d\n", min);

    return 0;
}