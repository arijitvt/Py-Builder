#ifndef DERIVED_HH
#define DERIVED_HH

#include <base.h>
class Base;
class Derived:public Base {
	public:
		Derived();
		virtual void setName(string name);
};
#endif
