#include <stdio.h> // for printf(), fgets()
#include <stdlib.h> // for exit()
#include <assert.h> // for assert()
#include <ctype.h> // for isdigit()
#include <string.h> // for strcmp()

// This project is for helping me get a feel for strings in C, and working with them
// using various functions from C libraries, especially for string manipulation / characters
int main(int argc, char **argv) {

    // Right now I want to play with varying types of user input.
    char guess[5];
    char *ans = "2\n"; // I guess this is a good way of showing two different String definitions in C.

    printf("Guess a number from 1 to 10: ");
    fgets(guess, sizeof(guess), stdin);

    // Check that the input string is a digit. If not, exit with an error code.
    if(isdigit(*guess) == 0) {
        fflush(stdout);
        printf("oi bruv you need to put in a number m8");
        exit(1);
    }

    if(strcmp(guess, ans) != 0) {
        fflush(stdout);
        printf("that's the wrong number brah.............");
        exit(1);
    }

    // assert() will make sure that the condition inside of it is true, and if not, the program will terminate.
    // In "debug mode," it will also print an error to the console indicating the line where the assertion failed.
    assert(*guess - '0' == 2); // you can try changing this to another number and the program will crash if it gets here

    printf("congratulations!! you are so smart. the number was %d", 2); // this is so unnecessary but good for practicing string formatting


    // The exit() function terminates a program with an exit code, similar to returning 0
    // in main().

    // exit() is located in stdlib.h, assert() is located in assert.h
    exit(0);
}