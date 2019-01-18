#include<stdio.h>
//最大公约数，最小公倍数，dotcpp 1011 
int main(){
	int a, b;
	int divisor, multiple;
	int big, small, t = 0;
	
	scanf("%d %d", &a, &b);
	//让a成为较小那个 
	small = a>b?b:a;
	big = a>b?a:b;
	//辗转相除法 
	while(small > 0){
		t = big % small ;
		big = small;
		small = t;
	}	
	divisor = big;
	//最小公倍数 = 两数之积 * 最大公约数 
	multiple = a * b / divisor;
	printf("%d %d", divisor, multiple);
	return 0;
} 
