#include <stdio.h>

int main(void) {
    // Apparently the result of truncation via modulus and division
    // for negative integers vary by implementation of C.

    // Try this code on different devices and see if the output changes.
    printf("Modulus result: %d\nDivision result: %d\n", -4%-3, -4/-3);

    return 0;
}