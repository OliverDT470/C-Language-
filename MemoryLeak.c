/*
	这是一个简单的内存泄漏(Memory Leak)
*/

#include <stdio.h>
#include <malloc.h>

int main(void)
{
	while (1)
	{
	int *p = (int*)malloc(20000);
	}
	return 0;
}