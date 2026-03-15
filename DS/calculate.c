#include <stdio.h>

int main() {
    int n, i;
    int sum = 0; // Initialize sum to 0

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Logic to calculate sum
    for(i = 0; i < n; i++) {
        sum = sum + arr[i]; // Add current element to total sum
    }

    printf("\nSum of all elements in the array: %d\n", sum);

    return 0;
}