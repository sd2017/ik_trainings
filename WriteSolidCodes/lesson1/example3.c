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

int main(void)
{
	short *p = 0;
	int **pp = 0;

	++p;
	++pp;

	printf("%d %d\n", p, pp);

	return 0;
}

