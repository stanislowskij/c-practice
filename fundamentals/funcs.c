#include <stdio.h> 
#include <math.h>

// It'd be nice to learn more about how struct(ure)s work in C down the line.
// Working with arrays seems like a bit of a headache as well... coming soon :-)
struct Zeros {
    float first;
    float second;
};

struct Zeros findZeros(int a, int b, int c);

int main(int argc, char *argv[]) {
    /*
     * Some important notes:
     *      - functions in C must be declared before they are used (unlike in Java)
     *      - C has function prototypes: you can specify a return type, name and arguments before
     *        writing the function body at all. (i.e. void procedure(void);)
     *        This is an "interface specification"
     *      - You can write function definitions above the programs that call them (e.g. main),
     *        or declare them first and define them later.
    */
   int a;
   int b;
   int c;

   // Reusing the sscanf() method here to take command line arguments as ints.
   sscanf(argv[1], "%d", &a);
   sscanf(argv[2], "%d", &b);
   sscanf(argv[3], "%d", &c);

   struct Zeros ans = findZeros(a, b, c);
   printf("The zeros are: x = {%.2f, %.2f}\n", ans.first, ans.second);
}

// This function is designed to return the two zeros of a quadratic polynomial ax^2 + bx + c given its coefficients (as ints).
// It uses a struct to accomplish this, but I may try to recreate this function using an array once I understand them better in C.
struct Zeros findZeros(int a, int b, int c) {
    float discrim = b*b - 4*a*c;
    float first = (-b - sqrt(discrim)) / (2*a);
    float second = (-b + sqrt(discrim)) / (2*a);

    struct Zeros ans = {first, second};

    return ans;
}