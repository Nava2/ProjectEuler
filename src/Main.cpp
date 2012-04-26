/*
 * Main.cpp
 *
 *  Created on: Apr 25, 2012
 *      Author: kevin
 */

#include "headers/P010.h"
#include <ctime>


#define CLASS P010

int main() {
	CLASS p;

	time_t start = std::time(NULL);

	p.exec();

	time_t end = std::time(NULL);
	double x = (end-start) * 1.0;

	cout<< "Time: " << x << "s" << endl;
}


