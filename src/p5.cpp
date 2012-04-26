/*
 * p5.cpp
 *
 *  Created on: Apr 25, 2012
 *      Author: kevin
 */

#include "headers/P5.h"

void P5::exec(void) {
	int nums[] = {11, 13, 14, 15, 16, 17, 18, 19, 20};

	long n = 20;
	bool valid;
	do {
		n++;
		valid = true;
		for (int i = 0; valid && i < 9; i++) {
			valid = valid && (n % nums[i] == 0);
		}
	} while (!valid);

	cout << "result: " << n << endl;
}


