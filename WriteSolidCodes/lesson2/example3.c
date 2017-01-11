/*
 * =====================================================================================
 *
 *       Filename:  example3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/10/2017 06:42:44 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(void)
{
#define MOVE_CONSTANT_BITS	64
	unsigned int move_step = MOVE_CONSTANT_BITS;

	unsigned int value1 = 1ul << MOVE_CONSTANT_BITS;
	unsigned int value2 = 1ul << move_step;

	printf("value1 is 0x%X\n", value1);
	printf("value2 is 0x%X\n", value2);

	return 0;
}

