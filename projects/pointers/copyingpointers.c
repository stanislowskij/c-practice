#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int one = 1;
    int *pOne = &one; // assign some pointer to 1
    int two = 2;
    int *pTwo = &two;
    int three = 3;
    int *pThree = &three;
    int four = 4;
    int five = 5;
    

    // the question is, can pOne and pTwo now be considered to form an array, according to C?
    printf("--- Array testing ---\n"); // idk
    printf("pOne -> %p\n", pOne);
    printf("pTwo -> %p\n", pTwo);
    printf("pThree -> %p\n", pThree);
    printf("Value at pOne[0]: %d (or %d)\n", pOne[0], *(pOne + 0)); // pOne[0] is equivalent to *(p + 0)
    printf("Value at pOne[1]: %d (or %d)\n", pOne[1], *(pOne + 1)); // pOne[1] is equivalent to *(p + 1)
    printf("Value at pOne[2]: %d (or %d)\n", pOne[2], *(pOne + 2)); // pOne[2] is equivalent to *(p + 2)
}