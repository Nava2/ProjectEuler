/*
 * p3.cpp
 *
 *  Created on: Apr 24, 2012
 *      Author: kevin
 */

#include <iostream>
using namespace std;

#define NUM = 600851475143;

bool isPrime(long n) {
	if (n % 2 == 0)
		return false;

	for (long i=3; i<n; i+=2) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	long res = 0;

	cout << "sex" << endl;

	for (long i=1; i < 600851475142; i+=2) {
		if (isPrime(i) && (600851475143 % i == 0)) {
			res = i;
			cout << "New result: " << res << endl;
			//break;
		}
	}

	cout << "Result: " << res;
}


