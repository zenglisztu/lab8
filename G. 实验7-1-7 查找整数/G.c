#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int input_arr(int* p, int size_t);
int main(int argc, char* argv[])
{
	int num_cnt = 0;
	int num_target = 0;
	int i = 0;
	int j = 0;
	scanf("%d%d", &num_cnt, &num_target);
	int *p = NULL;
	p = (int*)malloc(sizeof(int) * num_cnt);
	if (NULL == p)
	{
		return -1;
	}
	input_arr(p, num_cnt);
	for (i = 0; i < num_cnt; i++)
	{
		if (*(p + i) == num_target)
		{
			printf("%d", i);
			j++;
			break;
		}
	}
	free(p);
	p = NULL;
	if (!j)
	{
		printf("Not Found");
	}

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