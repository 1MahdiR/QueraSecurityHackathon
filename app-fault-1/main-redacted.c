#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int q, r;

// function to perform division (x / y) of two non-negative numbers x and y
void divide(int x, int y)
{
	if (y == 0) {
		q = r = 0;
		return;
	}
	int sign = 1;
	if (x * y < 0) {
		sign = -1;
	}
	// convert both dividend and divisor to positive
	x = abs(x);
	y = abs(y);
	int quotient = 0;
	int remainder = 0;
	while (!(x == quotient * y + remainder && remainder < y)) {
		quotient++;
		remainder = x - quotient * y;
	}

	q = sign * quotient;
	r = remainder;
}

int main()
{
	printf("Find a bug in divide function.\n");
	fflush(stdout);

	while (true) {
		printf("Enter two non-negative integers x, y to calculate x / y: ");
		fflush(stdout);
		int x, y;
		scanf("%d %d", &x, &y);
		divide(x, y);
		int q2 = 0, r2 = 0;
		if (y != 0) {
			q2 = x / y;
			r2 = x % y;
		}
		printf("%d %d %d %d\n", q, q2, r, r2);
		if (q != q2 || r != r2) {
			break;
		}
		printf("The divide function works correctly with given x, y. Try again.\n");
		fflush(stdout);
	}

	printf("Congrats! You found a bug in the divide function\n");
	fflush(stdout);

	printf("Here is the flag: queraCTF{...}\n");
	fflush(stdout);

	return 0;
}
