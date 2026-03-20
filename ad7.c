//wap to revrvse number of digit in a number


#include <stdio.h>

int main() {
    int n = 12345, reversed = 0, remainder;

    while (n != 0) {
        remainder = n % 10;            // Get last digit
        reversed = reversed * 10 + remainder; // Build reversed number
        n /= 10;                       // Reduce n
    }

    printf("Reversed Number: %d", reversed);
    return 0;
}
