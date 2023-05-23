//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma warning(disable:6031)
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define N 100
//
//int input_arr(int* p, int size_t);
//void print_arr(int* p, int size_t);
//int isin_arr(int* arr, int size_t, int num);
//int check_arr(int* p1, int len_1, int* p2, int len_2, int* uncmp);
//int main(int argc, char* argv[])
//{
//	int len_1 = 0;
//	int len_2 = 0;
//	int uncmp[N];
//	int sum = 0;
//	memset(uncmp, 0, sizeof(int) * N);
//	scanf("%d", &len_1);
//	int* p1 = NULL;
//	p1 = (int*)malloc(sizeof(int) * len_1);
//	if (NULL == p1)
//	{
//		return -1;
//	}
//	memset(p1, 0, sizeof(int) * len_1);
//	input_arr(p1, len_1);
//
//	scanf("%d", &len_2);
//	int* p2 = NULL;
//	p2 = (int*)malloc(sizeof(int) * len_2);
//	if (NULL == p2)
//	{
//		return -1;
//	}
//	memset(p2, 0, sizeof(int) * len_2);
//	input_arr(p2, len_2);
//	sum = check_arr(p1, len_1, p2, len_2, uncmp);
//	print_arr(uncmp, sum);
//	printf("\n");
//
//	
//	return 0;
//}
//
//int input_arr(int* p, int size_t)
//{
//	int i = 0;
//	for (i = 0; i < size_t; i++)
//	{
//		scanf("%d", p + i);
//	}
//	return 0;
//}
//
//void print_arr(int* p, int size_t)
//{
//	if (size_t <= 0 || p == NULL)
//	{
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < size_t; i++)
//	{
//		printf("%d ", *(p + i));
//	} 
//}
//
//int isin_arr(int *arr, int size_t, int num)
//{	
//	int res = 0;
//	int i = 0;
//	for (i = 0; i < size_t; i++)
//	{
//		if (*(arr+i) == num)
//		{
//			res = 1;
//			break;
//		}
//	}
//	return res;
//}
//
//int check_arr(int* p1, int len_1, int* p2, int len_2, int* uncmp)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len_1; i++)
//	{
//		if (!isin_arr(p2, len_2, *(p1 + i)))
//		{
//			if (!isin_arr(uncmp, N, *(p1 + i)))
//			{
//				uncmp[j] = *(p1 + i);
//				j++;
//			}
//		}
//	}
//	for (i = 0; i < len_2; i++)
//	{
//		if (!isin_arr(p1, len_1, *(p2 + i)))
//		{	
//			if (!isin_arr(uncmp, N, *(p2 + i)))
//			{
//				uncmp[j] = *(p2 + i);
//				j++;
//			}
//
//		}
//	}
//	
//	return j;
//}