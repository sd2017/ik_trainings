#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct test_type {
	short m1;
	int m2;
} test_type_t;


int main(void)
{
	test_type_t a = {
		.m1 = 0,
		.m2 = 0,
	};
	test_type_t b;

	memset(&b, 0, sizeof(b));
	
	if (0 == memcmp(&a, &b, sizeof(a))) {
		printf("Equal!\n");
	} else {
		printf("No equal!\n");
	}

	return 0;
}
