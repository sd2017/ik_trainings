#include <set>
#include <iostream>

using std::set;

void set_example()
{
	set<int> s;

	s.insert(8);
	s.insert(1);
	s.insert(9);
	s.insert(9);
	s.insert(7);
	s.insert(1);

	for (auto iter = s.begin(); iter != s.end(); ++iter) {
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	for (int i = 10; i < 21; ++i) {
		s.insert(i);
	}

	auto bgn = s.lower_bound(10);
	auto end = s.upper_bound(20);

	for (auto iter = bgn; iter != end; ++iter) {
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
}

int main()
{
	set_example();
}
