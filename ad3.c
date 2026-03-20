#include <stdio.h>

int main() {
    int arr[] = {12, 45, 2, 89, 34};
    int n = 5;
    int largest = arr[0]; // Assume first element is largest

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i]; // Update largest if current is bigger
        }
    }

    printf("Largest element: %d", largest);
    return 0;
}
