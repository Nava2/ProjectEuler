/*
 * Utils.cpp
 *
 *  Created on: Apr 25, 2012
 *      Author: kevin
 */

#include "headers/Utils.h"
#include <vector>
#include <cmath>
using namespace std;

bool Utils::isPrime(long n) {
	if (n % 2 == 0)
		return false;

	for (long i=3; i < sqrt(n); i+=2) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

bool Utils::isPrime(long n, vector<long> v) {
	if (n % 2 == 0)
		return false;

	vector<long>::iterator it = v.begin();
	double n_sqr = sqrt(n * 1.00);

	for (; *it <= n_sqr && it != v.end() ; it++) {
		if (n % *it == 0)
			return false;
	}

	return true;
}



