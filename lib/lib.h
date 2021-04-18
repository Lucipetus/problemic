#pragma once
#include <vector>
namespace est {
	class unit_base
	{
	public:
		unit_base();
		class unit_vec : public std::vector<unit_base*> {
		public:
			unit_vec();
			~unit_vec();
		};
		static unit_vec& get_units();
		virtual bool run() const = 0;
	private:
		static unit_vec _units;
	};

	bool test_all();
}