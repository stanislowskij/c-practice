/* First C program */
#include <stdio.h>

/* Main always returns an int, with the output of main representing the exit code of the C program.
0 means our code ran successfully. */
/* C has very very few built-in functions and the printf() function here comes from the standard library of C functions,
imported using #include and the name of the library, <stdio.h>. */
int main(void) {
    printf("Hello, world!\n");

    /* The same output of "Hello, world!" using multiple printf() calls. */
    printf("Hello, ");
    printf("world!");
    printf("\n");

    /* Some important notes:
        - all variables MUST be declared before they are used in C
        - they MUST be declared at the top of a block {} 
        - return statements are optional in main() only.
    */

   return 0;
}