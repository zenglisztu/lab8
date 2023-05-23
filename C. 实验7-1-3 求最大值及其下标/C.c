#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max_index(int* p, int size_t);
int main(int argc, char* argv[])
{
	int num_cnt = 0;
	int i = 0;
	int index = 0;
	scanf("%d", &num_cnt);
	int* p = NULL;
	p = (int*)malloc(sizeof(int) * num_cnt);
	if (p == NULL)
	{
		return -1;
	}
	for (i = 0; i < num_cnt; i++)
	{
		scanf("%d", p + i);
	}

	index = max_index(p, num_cnt);
	printf("%d %d", *(p + index), index);

	free(p);
	p = NULL;
	return 0;
}

int max_index(int* p, int size_t)
{
	int max = 0;
	int i = 0;
	for (i = 1; i < size_t; i++)
	{
		if (*(p + max) < *(p + i))
		{
			max = i;
		}
	}
	return max;
}