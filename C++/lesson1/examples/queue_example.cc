#include <queue>
#include <iostream>

using std::queue;

void queue_usage()
{
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	while (!q.empty()) {
		std::cout << "queue pop element:" << q.front() << std::endl;
		q.pop();
	}

	std::cout << "queue's size " << q.size() << std::endl;
}

int main()
{
	queue_usage();
}
