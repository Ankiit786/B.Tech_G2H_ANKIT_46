//wap to count no.of digits of number




#include <stdio.h>

int main() {
    int n = 12345, count = 0;

    if (n == 0) count = 1; // handle 0 as 1 digit
    else {
        while (n != 0) {
            n /= 10;
            count++;
        }
    }

    printf("Number of digits: %d", count);
    return 0;
}
