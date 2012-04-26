/*
 * Main.cpp
 *
 *  Created on: Apr 25, 2012
 *      Author: kevin
 */

#include "headers/P011.h"
#include <ctime>


#define CLASS P011

int main() {
	CLASS p;

	clock_t start = std::clock();

	p.exec();

	clock_t end = std::clock();
	double x = (end-start) * 1.0 / CLOCKS_PER_SEC;

	cout<< "Time: " << x << "s" << endl;
}


