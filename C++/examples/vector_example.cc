#include <vector>
#include <iostream>

using std::vector;

void vector_ctor()
{
	std::cout << "-- vector constructor example --" << std::endl;
	vector<int> vec1;
	for (int i = 0; i < 10; ++i) {
		vec1.push_back(i);
	}

	vector<int> vec2 {1,2,3,4,5}; //need c++11 support
	vector<int> vec3(vec2.begin(), vec2.end());
	for (int i = 0; i < vec3.size(); ++i) {
		std::cout << vec3[i] << " ";
	}
	std::cout << std::endl;
}

void vector_access()
{
	std::cout << "-- vector access example --" << std::endl;
	vector<int> vec {1,2,3,4,5,6,7,8,9,10};
	vector<int>::iterator iter = vec.begin();
	for (; iter != vec.end(); ++iter) {
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < vec.size(); ++i) {
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < vec.size(); ++i) {
		std::cout << vec.at(i) << "";
	}
	std::cout << std::endl;

	std::cout << "vector front: " << vec.front() << std::endl;
	std::cout << "vector back: " <<  vec.back() << std::endl;
}

void vector_size()
{
	std::cout << "-- vector size example --" << std::endl;
	vector<int> vec {1,2,3,4,5,6,7,8,9,10};

	std::cout << "vector size:" << vec.size() << std::endl;
	std::cout << "vector max_size:" << vec.max_size() << std::endl;
	std::cout << "vector capacity:" << vec.capacity() << std::endl;
	vec.push_back(11);
	vec.push_back(12);
	std::cout << "vector capacity:" << vec.capacity() << std::endl;
}

void vector_modify()
{
	std::cout << "-- vector modify example --" << std::endl;
	vector<int> vec {1,2,3,4,5,6,7,8,9,10};
	vec.insert(vec.begin(), 0);
	vec.push_back(11);
	for (auto iter = vec.begin(); iter != vec.end(); ++iter) {
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
	vec.erase(vec.begin());

	for (auto iter = vec.begin(); iter != vec.end(); ++iter) {
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
}

void run_examples()
{
	vector_ctor();
	vector_access();
	vector_size();
	vector_modify();
}

int main()
{
	run_examples();
}
