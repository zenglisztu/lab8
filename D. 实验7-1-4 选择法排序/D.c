#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void select_sort(int* p, int size_t);
void print_arr(int* p, int size_t);
int main(int argc, char* argv[])
{
	int num_cnt = 0;
	int i = 0;
	scanf("%d", &num_cnt);
	int* p = NULL;
	p = (int*)malloc(sizeof(int) * num_cnt);
	if (NULL == p)
	{
		return -1;
	}
	for (i = 0; i < num_cnt; i++)
	{
		scanf("%d", p + i);
	}
	select_sort(p, num_cnt);
	print_arr(p, num_cnt);

	free(p);
	p = NULL;


	return 0;
}

void select_sort(int* p, int size_t)
{
	int min_index = 0;
	int i = 0;
	int j = 0;

	for (i = 0; i < size_t - 1; i++)
	{
		min_index = i;
		for (j = i +1; j < size_t; j++)
		{
			if (*(p + min_index) <  *(p + j))
			{
				min_index = j;
			}
		}
		if (i != min_index)
		{
			*(p + i) = *(p + i) + *(p + min_index);
			*(p + min_index) = *(p + i) - *(p + min_index);
			*(p + i) = *(p + i) - *(p + min_index);
		}
	}
	
}

void print_arr(int* p, int size_t)
{
	int i = 0;
	for (i = 0; i < size_t; i++)
	{
		printf("%d", *(p + i));
		if (i != size_t- 1)
		{
			printf(" ");
		}
	}
}