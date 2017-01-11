#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <string>
using std::string;

void c_style()
{
	char str0[] = "jack";
	char str1[] = "@ikuai8.com";

	char* dst = (char*)malloc(sizeof(str0) + sizeof(str1));
	memcpy(dst, str0, sizeof(str0));
	memcpy(dst+strlen(dst), str1, sizeof(str1));

	printf("c   style :%s\n", dst);
}

void cpp_style()
{
	string str0 = "jack";
	string str1 = "@ikuai8.com";
	string dst = str0 + str1;

	printf("cpp style :%s\n", dst.c_str());
}

int main()
{
	c_style();
	cpp_style();
}
