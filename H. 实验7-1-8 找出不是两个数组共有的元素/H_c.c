#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>

int main(void) {
	int i, j, k = 0, n1, n2, temp, flag;
	int a3[25];
	scanf("%d", &n1);   //输入第一串 
	int a1[n1 - 1];
	for (i = 0; i < n1; i++) {
		scanf("%d", &a1[i]);
	}
	scanf("%d", &n2);   //输入第二串 
	int a2[n2 - 1];
	for (i = 0; i < n2; i++) {
		scanf("%d", &a2[i]);
	}
	for (i = 0; i < n1; i++) { //第一个数组与第二组比对。 
		temp = a1[i];
		flag = 0;        //flag=0表示未遇到相同数字，=1是遇到了。 
		for (j = 0; j < n2; j++) {
			if (temp == a2[j]) {
				flag = 1;   //遇到相同了。 
				break;
			}
		}
		if (flag == 0) {      //遇到不同。 
			a3[k] = temp;
			k++;
		}
	}
	for (i = 0; i < n2; i++) {  //第二组与第一组比对 
		temp = a2[i];
		flag = 0;
		for (j = 0; j < n1; j++) {
			if (temp == a1[j]) {
				flag = 1;   //遇到相同了。 
				break;
			}
		}
		if (flag == 0) {      //遇到不同。 
			a3[k] = temp;
			k++;
		}
	}
	printf("%d", a3[0]);   //输出第一个不同数。 
	for (i = 1; i < k; i++) {
		flag = 0;
		for (j = 0; j < i; j++) {  //只要当前数字与前边的数字没有重复，就可以输出。 
			if (a3[i] == a3[j]) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			printf(" %d", a3[i]);
		}
	}
	return 0;
}
