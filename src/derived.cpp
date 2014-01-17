#include <derived.h>


Derived::Derived() {
	cout<<"This is the derived class constructor"<<endl;
}

void Derived::setName(string n) {
	Base::setName(n);
}
