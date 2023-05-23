#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int input_arr(int* p, int size_t);
int main(int argc, char* argv[])
{
	int lens = 0;
	int i = 0;
	int j = 0;
	int max = 0;
	scanf("%d", &lens);
	int* p = NULL;
	p = (int*)malloc(sizeof(int) * lens);
	if (p == NULL)
	{
		return -1;
	}
	input_arr(p, lens);
	int temp = 0;
	int value = 0;
	for (i = 0; i < lens; i++)
	{
		temp = 0;
		for (j = 0; j < lens; j++)
		{
			if (*(p + i) == *(p + j))
			{
				temp++;
			}
		}
		if (temp > max)
		{
			max = temp;
			value = *(p + i);
		}

	}

	printf("%d %d", value, max);



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