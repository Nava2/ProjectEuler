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

	list<long> primes = Utils::getPrimes(2000000);

	list<long>::iterator it = primes.begin();

	long sum = 0;
	for (; it != primes.end() ; it++) {
		sum += *it;
	}

	cout << "Result: " << sum << endl;
}
