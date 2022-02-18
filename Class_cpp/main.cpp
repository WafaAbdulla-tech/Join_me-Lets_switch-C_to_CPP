/*
 * main.cpp
 *
 *  Created on: 18-Feb-2022
 *      Author: Wafa
 */

#include <iostream>
#include <string.h>
using namespace std;

const int max_len = 255;

//Class is C structure equivalent of CPP.
//Class can have functions, private and public member functions.
/*Private member functions are accessible only inside class, but sPublic
members are available to any function within the scope of the class declaration.*/
class test {
public:
	//universal access
	void assign(const char *st) {
		strcpy(s, st);
		len = strlen(s);
	}
	int length() {
		return len;
	}
	void print() {
		cout << s << "\nLength:  " << len << "\n";
	}
private: // restricted access to member functions
	char s[max_len];
	int len;
};

int main() {


	test  one,two;
	char three[40] ="My name is Wafa Abdulla.";
	one.assign("My name is Sayyid Nooh.");
	two.assign(three);
	cout<< three;
	cout << "\nLength: "<<strlen(three) << endl; // Print shorter of one and two.
	if (one.length() <= two.length())
	one.print() ;
	else
	two.print() ;
	}
