/*
 * =====================================================================================
 *
 *       Filename:  example1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/22/2016 12:42:02 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	float f1, f2;

	f1 = 1/0.0;
	memset(&f2, 0xff, sizeof(f2));

	printf("f1: %f, f2: %f\n", f1, f2);

	if (f1 == f1) {
		printf("f1: Equal\n");
	} else {
		printf("f1: Not Equal\n");
	}

	if (f2 == f2) {
		printf("f2: Equal\n");
	} else {
		printf("f2: Not Equal\n");
	}

	return 0;
}

