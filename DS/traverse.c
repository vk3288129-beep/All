#include <stdio.h>

int main() {
    int n, i;

    // 1. Ask for the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // 2. Create the array
    int arr[n]; 

    // 3. Input elements (Creation/Insertion)
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 4. Traverse the array
    printf("\nTraversing the array...\n");
    printf("Array elements are: [ ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");

    return 0;
}