#include <stdio.h>

#define NUM1	5
#define NUM2	10
#define DOUBLE1 2.
#define DOUBLE2 0.3

/* Symbolic constants organize various constants together into one spot. */
/* Use these to prevent the usage of "magic numbers." */

int main(void) {
	printf("%d\n", NUM1+NUM2);
	printf("%.2f\n", DOUBLE1+DOUBLE2);
	return 0;
}
