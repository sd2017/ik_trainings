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

#define TO_STR(x)	(#x)
#define PRINT_COUNT(x)	printf("%s: %d\n", TO_STR(x), x)

#define DECLARE_IK_MEM_POOL(pool_name, mem_name) \
	struct ik_##pool_name { \
		struct mem_name data; \
		struct list_head next; \
	}; \
	extern struct mem_name *ik_mem_pool_alloc_##pool_name(gfp_t gfp_flags); \
	extern void ik_mem_pool_free_##pool_name(struct mem_name *data);


int main(void)
{
	int count1 = 1;
	int count2 = 2;

	PRINT_COUNT(count1);
	PRINT_COUNT(count2);

	return 0;
}

