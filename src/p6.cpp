/*
 * p6.cpp
 *
 *  Created on: Apr 25, 2012
 *      Author: kevin
 */

#include <iostream>
using namespace std;

int main() {
	int sum_sqr = 0;
	int sqr_sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum_sqr += i*i;
		sqr_sum += i;
	}

	sqr_sum *= sqr_sum;

	cout << "Result: " << sqr_sum-sum_sqr << endl;
}


