#include<stdio.h>
//写求最大公约数和最小公倍数的函数，dotcpp1027 
int divisor(int, int);
int multiple(int, int, int);

int main(){
	int a, b;
	int d, m;
	scanf("%d %d", &a, &b);
	d = divisor(a, b);
	m = multiple(a, b, d);
	printf("%d %d", d, m);
	
	return 0;
}

int divisor(int a, int b){
	int temp = 1;
	if(a > b){ //这里如果a < b的话，temp就没有赋值 
		temp = b;
		b = a;
		a = temp;
	}
	while(temp){
		temp = b % a;
		b = a;
		a = temp;
//		printf("b = %d\n", b);
	}
	return b;
}

int multiple(int a, int b, int d){
	int m;
	m = a * b / d;
	return m;
}
