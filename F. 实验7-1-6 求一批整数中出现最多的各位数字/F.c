#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20
#define M 10

int input_arr(int* p, int size_t);
int count_char(int arr[], char str[]);
int max_int(int arr[], int size_t);
int num_str(int num, char str[]);
int main(int argc, char* argv[])
{
	int num_dic[M] = { 0 };
	int num_cnt = 0;
	int i = 0;
	int max = 0;
	int max_n = 0;
	scanf("%d", &num_cnt);
	int* p = NULL;
	p = (int*)malloc(sizeof(int) * num_cnt);
	if (NULL == p)
	{
		return -1;
	}
	input_arr(p, num_cnt);
	for (i = 0; i < num_cnt; i++)
	{
		char num_s[N] = { 0 };
		num_str(*(p+i), num_s);
		count_char(num_dic, num_s);
	}
	free(p);
	p = NULL;
	max = max_int(num_dic, M);
	for (i = 0; i < M; i++)
	{
		if (num_dic[i] == max)
		{
			max_n++;
		}
	}
	printf("%d: ", max);
	int flag = 0;
	for (i = 0; i < M; i++)
	{
		if (num_dic[i] == max)
		{	
			flag++;
			printf("%d", i);
			if (flag != max_n)
			{
				putchar(' ');
			}
		}
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

int count_char(int arr[], char str[])
{
	int len = strlen(str);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		int index = (int)str[i] - '0';
		arr[index]++;
	}
	return 0;
}

int max_int(int arr[], int size_t)
{
	int max = 0;
	int i = 0;
	for (i = 0; i < size_t; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int num_str(int num, char str[])
{
	
	int i = 0;
	int j = 0;
	while (num)
	{
		str[i] = (char)(num % 10) + '0';
		i++;
		num /= 10;
	}
	int t = i - 1;
	for (j = 0; j < i / 2; j++,t--)
	{
		char temp = str[j];
		str[j] = str[t];
		str[t] = temp;
	}
	return 0;
}