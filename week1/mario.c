/*
Title        : Mario
File         : mario.c
Author       : M. Langham
Date         : 2018/05/03
Purpose      : prints out a double half-pyramid of a specified 
				height.
*/


#include <stdio.h>

int main(void) {
	
	int h = 0;		// height
	int s;			// spaces, left side
	int s2;			// spaces, right side
	int b;			// blocks, left side
	int b2;			// blocks, right side


	// ask for input height (h) 1<=23
	do {
		printf ("Enter a height no greater than 23:\n");
  		scanf ("%i", &h);
	} 
	while(h<1 || h>23);


  	printf("\n\n");		// buffer spaces


  	// row counter loop
	for(int r = 0; r<h; r++) {

		s = h - r - 1;		// spaces = height - count - 2
		b = r + 2;			// blocks = row + 2
		s2 = s;				// copy
		b2 = b;				// copy

		while(s > 0) {		// print spaces
			printf(" ");
			s--;
		}

		while(b > 0) {		// print blocks
			printf("#");
			b--;
		}

		printf("  ");		// double space

		while(b2 > 0) {		// print blocks
			printf("#");
			b2--;
		}

		printf("\n");		// new line

	} /* END row loop */


	printf("\n\n");		// buffer spaces


} /* END main */
