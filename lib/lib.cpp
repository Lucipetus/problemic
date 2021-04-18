#include "lib.h"
#include <iostream>

namespace est {
	unit_base::unit_vec unit_base::_units;
	unit_base::unit_base() {
		_units.push_back(this);
		std::cout << "push unit to: " << &_units << std::endl;
	} 
	unit_base::unit_vec::unit_vec() {
		std::cout << "vec(): " << this << std::endl;
	}
	unit_base::unit_vec::~unit_vec() {
		std::cout << "~vec(): " << this << std::endl;
	}
	unit_base::unit_vec& unit_base::get_units()
	{
		return _units;
	}
	bool test_all()
	{
		std::cout << "before get_units" << std::endl;
		auto& units = unit_base::get_units();
		std::cout << "after get units" << std::endl;
		for(auto& u: units) {
			u->run();
		}
		return false;
	}
}