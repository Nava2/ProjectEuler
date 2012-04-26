/*
 * p2.cpp
 *
 *  Created on: Apr 24, 2012
 *      Author: kevin
 */

#include "headers/P2.h"

void P2::exec(void) {
	int prev1 = 1, prev2 = 1;
	int res = 0;

	for (int v=0; v < 4000000; ) {
		v = prev1 + prev2;

		prev2 = prev1;
		prev1 = v;

		if (v % 2 == 0) {
			res += v;
		}
	}

	cout << "Result: " << res;
}



