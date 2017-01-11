#include <stack>
#include <iostream>
#include <cstdio>

using std::stack;

void stack_usage()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	while (!s.empty()) {
		std::cout << "stack pop element:" << s.top() << std::endl;
		s.pop();
	}

	std::cout << "stack's size " << s.size() << std::endl;
}

int main()
{
	stack_usage();
}
