#include<stdio.h>
//���Լ������С��������dotcpp 1011 
int main(){
	int a, b;
	int divisor, multiple;
	int big, small, t = 0;
	
	scanf("%d %d", &a, &b);
	//��a��Ϊ��С�Ǹ� 
	small = a>b?b:a;
	big = a>b?a:b;
	//շת����� 
	while(small > 0){
		t = big % small ;
		big = small;
		small = t;
	}	
	divisor = big;
	//��С������ = ����֮�� * ���Լ�� 
	multiple = a * b / divisor;
	printf("%d %d", divisor, multiple);
	return 0;
} 
