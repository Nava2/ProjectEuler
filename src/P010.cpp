/*
 * P010.cpp
 *
 *  Created on: Apr 25, 2012
 *      Author: kevin
 */

#include "headers/P010.h"

#include <list>
using namespace std;

void P010::exec(void) {

	vector<long> primes;

	primes.push_back(2l);

	long sum = 1;
	for (long i = 3; i < 2000000; i+=2) {
		if (Utils::isPrime(i, primes)) {
			sum += i;
			primes.push_back(i);
		}
	}

	cout << "Result: " << sum << endl;
}
