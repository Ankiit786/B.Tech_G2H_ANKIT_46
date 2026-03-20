#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5; // size of the array
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i]; // add current element to sum
    }

    printf("Sum of elements: %d", sum);
    return 0;
}
