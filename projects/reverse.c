#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Another small project to reverse the characters in a string from the command line and print them.
// I guess this is more of an exercise in loop control than string manipulation.. but it can be both.

// Personal note: this took a HORRIBLE amount of time to debug because of a misunderstanding of what sizeof() does.
// DO NOT USE SIZEOF() ON POINTERS EVER AGAIN UNLESS YOU ACTUALLY INTEND ON GETTING THE LENGTH OF THE MEMORY ADDRESS FOR SOME REASON
// CHAR ARRAYS ARE POINTERS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int reverse(char *r);

int main(int argc, char *argv[]) {
    if(argc == 1 | argc > 2) {
        fprintf(stderr, "reverse.c: Argument missing for input string to reverse");
        exit(EXIT_FAILURE); // get in the habit of using these exit codes defined in stdlib
    }

    char r[strlen(argv[1])];
    strcpy(r, argv[1]);
    reverse(r);

    for(int i = 0; i < strlen(argv[1]); i++) {
        printf("%c", r[i]);
    }
    printf("\n");

    exit(EXIT_SUCCESS);
}

int reverse(char *r) {
    int i;
    int tmp;
    int reversei;
    if(strlen(r) == 0)
        return 0;

    for(i = 0; i < strlen(r)/2; i++) {
        tmp = r[i];
        r[i] = r[strlen(r)-i-1];
        r[strlen(r)-i-1] = tmp;
    }
    return 1;
}