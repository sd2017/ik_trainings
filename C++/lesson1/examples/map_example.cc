#include <map>
#include <string>
#include <utility>
#include <iostream>

using std::map;
using std::pair;
using std::string;

void map_ctor()
{
	std::cout << "-- map constructor example --" << std::endl;
	map<string, int> map_inilist {{"a", 1}, {"b", 2}, {"c", 3}};
	for (auto iter = map_inilist.begin(); iter !=  map_inilist.end(); ++iter) {
		std::cout << iter->first << ":" << iter->second << ' ';
	}
	std::cout << std::endl;
}

void pair_ctor()
{
	pair<string, int> p = std::make_pair("ikuai", 2017);
	std::cout << p.first << " " << p.second << std::endl;
}

void map_access()
{
	map<string, int> map_inilist {{"a", 1}, {"b", 2}, {"c", 3}};
	std::cout << map_inilist["a"] << " " << map_inilist["b"] << " " << map_inilist["c"] << std::endl;
	std::cout << map_inilist["d"] << std::endl;
	std::cout << map_inilist.at("a") << " " << map_inilist.at("b") << " " << map_inilist.at("c") << " " << map_inilist.at("d") << std::endl;
}

void map_size()
{
	std::cout << "-- map size example --" << std::endl;
	map<string, int> map_inilist {{"a", 1}, {"b", 2}, {"c", 3}};

	std::cout << "map size: "<< map_inilist.size() << std::endl;
	std::cout << "map max size: " << map_inilist.max_size() << std::endl;
}

void map_modify()
{
	std::cout << "-- map modify example --" << std::endl;
	map<int, string> map_container;
	map_container[2] = "pei";
	map_container[1] = "xiao";
	map_container[0] = "feng";

	map_container.insert(std::make_pair(3, "ikuai"));
	for (auto iter = map_container.begin(); iter != map_container.end(); ++iter) {
		std::cout << iter->second << " ";
	}
	std::cout << std::endl;
	std::cout << "map.count(1) " << map_container.count(1) << std::endl;

	map_container.erase(0);
	map_container.erase(1);
	map_container.erase(2);
	map_container.erase(3);
	std::cout << "after erase 0,1,2,3, map size:" << map_container.size() << std::endl;
}

void map_find()
{
	map<int,char> example = {{1,'a'},{2,'b'}, {3, 'c'}, {4, 'd'}, {5, 'e'}};
	auto search = example.find(2);
	if (search != example.end()) {
		std::cout << "Found " << search->first << " " << search->second << std::endl;
	} else {
		std::cout << "Not found" << std::endl;
	}

	// find element x which 2 <= x <= 4
	auto iter_bgn = example.lower_bound(2);
	auto iter_end = example.upper_bound(4);

	for (auto iter = iter_bgn; iter != iter_end; ++iter) {
		std::cout << iter->first << " " << iter->second << std::endl;
	}

	auto pos = example.equal_range(4);
}

void run_examples()
{
	map_ctor();
	pair_ctor();
	map_size();
	map_modify();
	map_access();
	map_find();
}

int main()
{
	run_examples();
}
