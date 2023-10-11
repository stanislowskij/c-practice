/* 
 * An example of control structures in C which computes
 * The greatest common divisor (GCD) between two ints n and m.
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    int m;
    int temp;

    // Might be worth looking into more how these functions work.
    sscanf(argv[1], "%d", &n);
    sscanf(argv[2], "%d", &m);

    // i.e. while n is not 0, since TRUE evaluates to
    // any number greater than 0 in C.
    while(n) {
        int tmp = n;
        n = m % n;
        m = tmp;
    }
    printf("GCD: %d\n\n", m);
}