#include <stdio.h>

int main(void) {
    // Some small notes on logical operators in C:

    // They are basically all the same as in Java. The main difference is that boolean expressions
    // evaluate to 1 for TRUE and 0 for FALSE.

    // C is a short-circuiting language.

    int i = 0;
    int array[4] = {3, 4, 5, 6};
    int valid;
    while (i < 4) {
        printf("%d\n", array[i]);
        ++i;
    }
    valid = i == 5;

    // Try not to use the unary operator !x so much, since (x == 0) tends to be more common in C instead.
    if(!valid) {
        printf("i is not 5\n");
    }
    if(valid == 0) {
        printf("if the last printf() call runs, this should as well.\n");
    }
    return 0;

    // A brief note on bitwise operators (discussed later):
    /* Bitwise operators are used to shift individual bits. Since C is a low-level programming language, get used to
    * manipulating hardware directly like this.
    * 
    * bitwise AND = &
    * bitwise OR = |
    * bitwise XOR = ^
    * left shift = <<
    * right shift = >>
    * one's complement = ~
    * 
    * Get the basic programming stuff down first, though.
    * 
    */
}