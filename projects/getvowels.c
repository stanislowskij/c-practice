#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define BUFFER_SIZE 100

// Another short project to get more familiar with using strings and stdlib functions in C.
// This program gets reads input from stdin and prints only the vowels (case-insensitive), if any.

// Function prototypes
int getvowels(char *target, char *input);
int isvowel(char c);

int main(void) {
    char input[BUFFER_SIZE];
    char target[sizeof(input)];
    int c;

    printf("Input any string (char limit: %d): \n", BUFFER_SIZE);
    fgets(input, BUFFER_SIZE, stdin); // note we don't need to reference the address of the variable for char arrays.
                                // these char arrays seem to have a lot of mysterious behavior with pointers that
                                // isn't entirely clear to me right now... hopefully I'll pick up on them.

    c = getvowels(target, input);
    printf("Vowels in the input string: %s\nTotal: %d\n", target, c);
}

int getvowels(char *target, char *input) {
    int i = 0, j = 0; // track index of next key in target to write at
    int s = 0; // count vowels for convenience
    while(input[i] != '\0') {
        if(isvowel(input[i])) {
            target[j++] = input[i]; // write the vowel, then increment j
            s++;
        }
        i++;
    }
    target[j] = '\0';
    return s; // return val is the number of vowels
}

int isvowel(char c) {
    int d = tolower(c);
    return (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u');
}
