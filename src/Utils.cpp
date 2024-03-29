/*
 * Utils.cpp
 *
 *  Created on: Apr 25, 2012
 *      Author: kevin
 */

#include "headers/Utils.h"
#include <vector>
#include <cmath>
#include <string>
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

list<long> Utils::getPrimes(long max) {
	list<long> primes;

	bool vals[max];
	for (int i = 0; i<max; i++)
		vals[i]=true;



	double d = sqrt(max*1.0);
	for (int i = 2; i <= d; i++) {
		if (vals[i]) {
			int j = i;
			while ((j += i) < max) {
				vals[j] = false;
			}
		}
	}

	for (int i = 0; i < max; i++) {
		if (vals[i])
			primes.push_back(i);
	}

	return primes;
}

void Utils::explode( string str, char delim, vector<std::string>& array )
{
	string::size_type pos = 0;
	string::size_type oldPos = 0;
	while( (pos = str.find(delim, oldPos)) != string::npos)
	{
		string sub = str.substr(oldPos, pos-oldPos);
		array.push_back(sub);
		oldPos = pos+1;
	}
}

long Utils::triangleSum(long n) {
	return (n * (n+1))/2;
}



