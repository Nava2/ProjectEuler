/*
 * P7.cpp
 *
 *  Created on: Apr 25, 2012
 *      Author: kevin
 */

#include "headers/P7.h"
#include "headers/Utils.h"

void P7::exec() {
	int c = 0;
	int n = 1;

	for ( ; ; n++) {
		if (Utils::isPrime(n)) {
			c++;
		}
		if (c == 10001)
			break;
	}

	cout << "Result: " << n << endl;
}

