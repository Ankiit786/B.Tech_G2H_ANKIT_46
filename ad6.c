//wap to copy one array into another

#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n = 5;
    int arr2[n]; // Create second array of same size

    for(int i = 0; i < n; i++) {
        arr2[i] = arr1[i]; // Copy element
    }

    for(int i = 0; i < n; i++) printf("%d ", arr2[i]);
    return 0;
}
