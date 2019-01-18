#include<stdio.h>
//用斐波那契数列前一位和后一位做分子分母的数列求和，dotcpp1018
int main(){
	int n;
	double sum;
	scanf("%d", &n);
	double fib[n+1]; //因为 第n位是fib[n]/fib[n-1],所以fib[]要取到第fib[n]位 ，也就是说fib总共有n+1的长度 
	//构建斐波那契数列 
	for (int i=0;i<=n;i++){
		if(i < 2){
			fib[i] = i + 1;
		}else{
			fib[i] = fib[i-1] + fib[i-2];
		}
	}
//	for (int i=0;i<n;i++){
//		printf("%lf ", fib[i]);
//	}
	for(int i=0;i<=n;i++){
//		printf("%.2lf / %.2lf\n", fib[i+1], fib[i]); // 
		sum += fib[i+1] / fib[i];
	}
	printf("%.2lf", sum);
	
	return 0;
} 
