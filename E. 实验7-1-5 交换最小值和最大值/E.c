#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int input_arr(int* p, int size_t);
int min_max(int* p, int size_t);
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

	input_arr(p, num_cnt);
	min_max(p, num_cnt);
	print_arr(p, num_cnt);

	free(p);
	p = NULL;
	return 0;
}

int input_arr(int* p, int size_t)
{
	int i = 0;
	for (i = 0; i < size_t; i++)
	{
		scanf("%d", p + i);
	}
	return 0;
}

int min_max(int* p, int size_t)
{
	int i = 0;
	int min = 0;
	int max = 0;
	for (i = 1; i < size_t; i++)
	{
		if (*(p + min) > *(p + i))
		{
			min = i;
		}
		if (*(p + max) < *(p + i))
		{
			max = i;
		}
	}
	//交换最小值
	*(p) = *(p)+*(p + min);
	*(p + min) = *(p)-*(p + min);
	*(p) = *(p)-*(p + min);
	for (i = 1; i < size_t; i++)
	{
		if (*(p + max) < *(p + i))
		{
			max = i;
		}
	}
	//交换最大值
	*(p+size_t-1) = *(p + size_t-1)+*(p + max);
	*(p + max) = *(p + size_t-1)-*(p + max);
	*(p + size_t-1) = *(p + size_t-1)-*(p + max);

	return 0;
}

void print_arr(int* p, int size_t)
{
	int i = 0;
	for (i = 0; i < size_t; i++)
	{
		printf("%d ", *(p + i));
	}
}