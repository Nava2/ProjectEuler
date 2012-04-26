/*
 * Utils.h
 *
 *  Created on: Apr 25, 2012
 *      Author: kevin
 */

#ifndef UTILS_H_
#define UTILS_H_

#include <vector>
#include <list>
using namespace std;

namespace Utils {
	bool isPrime(long n);
	bool isPrime(long, vector<long>);
	list<long> getPrimes(long);
	void explode( string, char, vector<std::string>& );

	long triangleSum(long);
};


#endif /* UTILS_H_ */
