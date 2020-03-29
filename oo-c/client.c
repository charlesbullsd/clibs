#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "interface.h"

/* reverse:  reverse string s in place */
/* taken from "The C Programming Language" (K&R2) */
void reverse(char s[])
{
    int i, j;
    char c;

    for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

/* itoa:  convert n to characters in s */
/* taken from "The C Programming Language" (K&R2) */
void itoa(int n, char s[])
{
	int i, sign;

	if ((sign = n) < 0)  /* record sign */
		n = -n;          /* make n positive */

 	i = 0;
	do {       /* generate digits in reverse order */
		s[i++] = n % 10 + '0';   /* get next digit */
	} while ((n /= 10) > 0);     /* delete it */

	if (sign < 0)
		s[i++] = '-';

	s[i] = '\0';
	reverse(s);
}

int num_digits(int i)
{
    if (i == 0) {
        return 1;
    }
    return floor(log10(abs(i))) + 1;
}

int digit_length(int i)
{
    int n = 0;
    if (i < 0) {
        n = n + 1;
    }
    n = n + num_digits(i);

    return n;
}

int main(int argc, char* argv[]) 
{
    int some_number = Library.add(2, 3);
	char c[digit_length(some_number)];

	itoa(some_number, c);

    Library.print("Adding 2 + 3 = ");
    Library.print(c);
    Library.print("\n");

    return 0;
}
