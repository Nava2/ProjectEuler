/*
 * Utils.h
 *
 *  Created on: Apr 25, 2012
 *      Author: kevin
 */

#ifndef UTILS_H_
#define UTILS_H_

#include <vector>
using namespace std;

class Utils {
public:
	static bool isPrime(long n);
	static bool isPrime(long, vector<long>);
};


#endif /* UTILS_H_ */