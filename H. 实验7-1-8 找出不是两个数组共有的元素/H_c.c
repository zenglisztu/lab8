#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>

int main(void) {
	int i, j, k = 0, n1, n2, temp, flag;
	int a3[25];
	scanf("%d", &n1);   //�����һ�� 
	int a1[n1 - 1];
	for (i = 0; i < n1; i++) {
		scanf("%d", &a1[i]);
	}
	scanf("%d", &n2);   //����ڶ��� 
	int a2[n2 - 1];
	for (i = 0; i < n2; i++) {
		scanf("%d", &a2[i]);
	}
	for (i = 0; i < n1; i++) { //��һ��������ڶ���ȶԡ� 
		temp = a1[i];
		flag = 0;        //flag=0��ʾδ������ͬ���֣�=1�������ˡ� 
		for (j = 0; j < n2; j++) {
			if (temp == a2[j]) {
				flag = 1;   //������ͬ�ˡ� 
				break;
			}
		}
		if (flag == 0) {      //������ͬ�� 
			a3[k] = temp;
			k++;
		}
	}
	for (i = 0; i < n2; i++) {  //�ڶ������һ��ȶ� 
		temp = a2[i];
		flag = 0;
		for (j = 0; j < n1; j++) {
			if (temp == a1[j]) {
				flag = 1;   //������ͬ�ˡ� 
				break;
			}
		}
		if (flag == 0) {      //������ͬ�� 
			a3[k] = temp;
			k++;
		}
	}
	printf("%d", a3[0]);   //�����һ����ͬ���� 
	for (i = 1; i < k; i++) {
		flag = 0;
		for (j = 0; j < i; j++) {  //ֻҪ��ǰ������ǰ�ߵ�����û���ظ����Ϳ�������� 
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
