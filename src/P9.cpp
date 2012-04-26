/*
 * P9.cpp
 *
 *  Created on: Apr 25, 2012
 *      Author: kevin
 */

#include "headers/P9.h"

// answer: 31875000

void P9::exec(void) {
	for (int c = 2; c < 999; c ++) {
		int c_sqr = c*c; // for speed
		// since c > b, count down instead
		for (int b = c-1; b > 1; b--) {

			// since looking for a+b+c = 1000, compute a based on b and c
			int a = 1000 - b - c;
			if (a*a + b*b == c_sqr) {
				// a,b,c is a pythag triplet, and already satisfies a+b+c=1000
				cout << "Result: " << a*b*c << endl;
				printf("%d, %d, %d\n", a, b, c);

				// there's only one.. :D
				return;
			}
		}
	}
}
