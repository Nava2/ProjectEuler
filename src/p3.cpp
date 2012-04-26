/*
 * p3.cpp
 *
 *  Created on: Apr 24, 2012
 *      Author: kevin
 */

#include "headers/P3.h"
#include "headers/Utils.h"

#define NUM 600851475143


void P3::exec(void) {
	long res = 0;

	cout << "sex" << endl;

	for (long i=1; i < NUM-1; i+=2) {
		if (Utils::isPrime(i) && (NUM % i == 0)) {
			res = i;
			cout << "New result: " << res << endl;
			//break;
		}
	}

	cout << "Result: " << res;
}


