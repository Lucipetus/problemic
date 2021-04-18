#include "lib.h"
#include <iostream>

namespace est
{
	bool est_test_func();
	class est_test : public unit_base
	{
	public:
		est_test():
			unit_base() {}
		bool run() const override
		{
			return est_test_func();
		}
	};
	static est_test est_test_inst;
	bool est_test_func() {
		std::cout << "test" << std::endl;
		return true;
	}
}

int main(int argc, char** argv)
{
	est::test_all();
}