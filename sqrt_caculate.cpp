#include<stdio.h>
#include<math.h>
//迭代计算平方根，dotcpp1021 
 int main(){
 	double a = 1, b; //a=X[n+1]，b=X[n]
 	double x;
 	scanf("%lf", &x);
 	do{
 		//printf("a=%lf,x/a=%lf", a, x/a);
 		b = a;
//		printf("a=%.3lf\n", a);
		a = (b + x / b) / 2;
// 		printf("x-a*a=%lf\n", temp);
	}while(fabs(a-b)>1e-5);
	printf("a=%.3lf\n",a);
 	
 	return 0;
 }
