#include <string>
#include <iostream>

using std::string;

void string_ctor()
{
	std::cout << "-- string constructor example --" << std::endl;

	string str1(10, 'c');
	std::cout << "str1:" << str1 << std::endl;

	const char arr[] = "fengxiaopei";
	string str2(arr, 5);
	std::cout << "str2:" << str2 << std::endl;

	string str3(arr);
	std::cout << "str3:" << str3 << std::endl;

	string str4(str3.begin(), str3.end());
	std::cout << "str4:" << str4 << std::endl;

	string str5(str4);
	std::cout << "str5:" << str5 << std::endl;
}

void string_operator()
{
	std::cout << "-- string operator = example --" << std::endl;

	string str1 = "source string";
	string str2 = str1;
	std::cout << "str2:" << str2 << std::endl;
}

void string_assign()
{
	std::cout << "-- string assign example --" << std::endl;

	string str1("before assign");
	str1.assign("after assigned");
	std::cout << str1 << std::endl;
}

void string_at()
{
	std::cout << "-- string at example --" << std::endl;
	string s("message");
	std::cout << s.at(3) << std::endl;
	s.at(0) = 's';
	std::cout << s << std::endl;
}

void string_idx()
{
	std::cout << "-- string oprerator [] example --" << std::endl;
	string s("example");

	for (unsigned i = 0; i < s.length(); ++i) {
		std::cout << s[i] << " ";
	}
	std::cout << std::endl;
}

void string_data()
{
	std::cout << "-- string data example --" << std::endl;
	string s("example");

	std::cout << s.data() << std::endl;
}

void string_c_str()
{
	std::cout << "-- string c_str example --" << std::endl;
	string s("example");
	std::cout << s.c_str() << std::endl;
}

void string_other_funcs()
{
	std::cout << "-- string other function example --" << std::endl;
	string s;
	s.append("xpfeng");

	s += " at ikuai.com";
	std::cout << s << std::endl;
	std::cout << s.size() << std::endl;

	string sub = s.substr(0, 6);
	std::cout << sub << std::endl;

	string company(s, s.find_first_of("i"), s.length());
	std::cout << company << std::endl;
}

void run_examples()
{
	string_ctor();
	string_operator();
	string_assign();
	string_at();
	string_idx();
	string_data();
	string_c_str();
	string_other_funcs();
}

int main()
{
	run_examples();
}
