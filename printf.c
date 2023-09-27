#include <stdio.h>

/* Playing around with integer constants and printf calls */
int main(void) {
	const int x = 20, y = 50, z = 100;
	printf("50 in hexidecimal: %x\n", y);
	printf("100/25 = %d\n", z/25);

	// printf() formats text output. characters preceded by % must be referenced later in the
	// input arguments.

	// i.e., printf("Hello %d", 4) will print the string "Hello 4", representing the input 4 as
	// a decimal value.

	printf("Character values %c %c %c\n", 'a', 'b', 'c');
	printf("Some floating-point values %f %f %f\n", 3.556, 2e3, 40.1f);

	//Extra: floating point values with specified rounding limits
	printf("Floating point values with limits %.2f %.4f %.0f\n", 3.4718192, 1892.0034178, 3.1);

	printf("Scientific notation %e %e %e\n", 3.556, 2e3, 40.1f);

	/* Right-justify string with space for
	15 chars, print only first 10 letters */
	printf("%15.10s\n", "Hello World\n");

	// A more complete discussion of printf() and its formatting fields and conversion specifiers is given
	// in Section 13.1.1 (see also [KR88, pages 154, 243–246] and [HS95, page 372]).

	return 0;
}
