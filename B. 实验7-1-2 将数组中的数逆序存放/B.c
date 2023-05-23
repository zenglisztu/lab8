#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_arr(int* p, int size_t);
int main(int argc, char* argv[])
{
	int num_count = 0;
	int i = 0;
	scanf("%d", &num_count);
	int* p = NULL;
	p = (int*)malloc(sizeof(int) * num_count);
	if (NULL == p)
	{
		return -1;
	}
	for (i = 0; i < num_count; i++)
	{
		scanf("%d", p + i);
	}

	print_arr(p, num_count);
	free(p);
	p = NULL;


	return 0;
}

void print_arr(int* p, int size_t)
{
	int i = 0;
	for (i = size_t - 1; i >= 0; i--)
	{
		printf("%d ", *(p + i));
	}
}