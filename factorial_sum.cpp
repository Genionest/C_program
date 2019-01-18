#include<stdio.h>
//求n个阶乘的和，被长整形教育了 ，dotcpp 1014 
int main(){
	int n;
	long long sum = 0, fact = 1; //sum的取值范围太大了，所以要用大类型 
	scanf("%d", &n);
	for (int i=1;i<=n;i++){ //i++实在执行完下面的语句后才开始的， 
		fact = fact * i;
		sum += fact;
	} 
	printf("%lld", sum); //输出是要注意类型 
	
	return 0;
} 
