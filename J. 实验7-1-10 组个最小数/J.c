#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10
#define M 50

int input_arr(int* p, int size_t);
int cmp_int(const void* pi1, const void* pi2);
int change(int arr[], int size_t);
int main(int argc, char* argv[])
{
	int numarr[N];
	int num_all[M];
	int i = 0;
	int j = 0;
	int v = 0;
	int index = 0;
	memset(numarr, 0, sizeof(int) * N);
	memset(num_all, 0, sizeof(int) * M);
	input_arr(numarr, N);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < numarr[i]; j++)
		{
			num_all[index] = v;
			index++;
		}
		v++;
	}
	qsort(num_all, index, sizeof(int), cmp_int);
	if (!num_all[0])
	{
		change(num_all, index);
	}
	
	for (i = 0; i < index; i++)
	{
		char ch = (char)num_all[i] + '0';
		putchar(ch);
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

int cmp_int(const void* pi1, const void* pi2)
{
	return *(int*)pi1 - *(int*)pi2;
}

int change(int arr[], int size_t)
{
	int i = 0;
	for (i = 0; i < size_t; i++)
	{
		if (arr[i] > arr[0])
		{
			arr[0] = arr[0] + arr[i];
			arr[i] = arr[0] - arr[i];
			arr[0] = arr[0] - arr[i];
			return 0;
		}
	}
}