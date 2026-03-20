#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int temp;

    for (int i = 0; i < n / 2; i++) {
        // Swap elements
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
