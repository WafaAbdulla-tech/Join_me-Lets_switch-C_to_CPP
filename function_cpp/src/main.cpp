/*
 * main.cpp
 *
 *  Created on: 18-Feb-2022
 *      Author: Wafa
 */
#include <iostream>
using namespace std;

//inline equavalent to #define macros in C
inline int sum(int a = 8, int b = 9, int c = 1) {
	int s = a + b + c;
	return s;
}

inline double avg(int sum) {
	double val = sum / 3.0;
	return val;
}

int main() {

	cout << "sum of a, b and c is " << sum(8, 9, 1);
	cout << "." << endl;
	cout << "average value of sum is" << avg(sum(8, 9, 1));
	return 0;
}
