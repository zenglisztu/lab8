#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20

int cmp_int(const void* pi1, const void* pi2);
void print_arr(int* p, int size_t);
int main(int argc, char* argv[])
{
	int i = 0;
	int src_num = 0;
	int insert_num = 0;
	scanf("%d", &src_num);
	int* p = NULL;
	p = (int*)malloc(sizeof(int) * (src_num + 1));
	if (NULL == p)
	{
		return;
	}
	for (i = 0; i < src_num; i++)
	{
		scanf("%d", p+i);
	}
	scanf("%d", p+i);
	qsort((void*)p, src_num+1, sizeof(int), cmp_int);
	print_arr((int*)p, src_num + 1);
	free(p);
	p = NULL;

	return 0;
}

int cmp_int(const void* pi1, const void* pi2)
{
	return *(int*)pi1 - *(int*)pi2;
}

void print_arr(int *p, int size_t)
{
	int i = 0;
	for (i = 0; i < size_t; i++)
	{
		printf("%d ", *(p + i));
	}
}
