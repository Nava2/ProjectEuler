/*
 * p4.cpp
 *
 *  Created on: Apr 24, 2012
 *      Author: kevin
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

bool isPalindrome(int n) {
	char* chars = (char*)malloc(20);
	sprintf(chars, "%d", n);
	string rev = string(chars);
	rev = string( rev.rbegin(), rev.rend() );
	int r = atoi(rev.c_str());

	return r == n;
}

int main() {
	int p1 = 0, p2 = 0;
	int pc = 0;

	for (int n1 = 100; n1 <= 999; n1++) {
		for (int n2 = n1; n2 <= 999; n2++) {
			int c = n1 * n2;
			if ((c > pc) && isPalindrome(c)) {
				p1 = n1;
				p2 = n2;
				pc = c;
			}
		}
	}

	printf("%d = (%d,%d)\n", p1*p2, p1, p2);
}



