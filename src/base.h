#ifndef BASE_HH
#define BASE_HH

#include <iostream>
#include <string>

using namespace std;


class Base {
	private:
		string name;

	public:
		void setName(string);
		string getName();
};

#endif

