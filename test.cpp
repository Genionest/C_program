#include<stdio.h>
//��쳲���������ǰһλ�ͺ�һλ�����ӷ�ĸ��������ͣ�dotcpp1018
int main(){
	int n;
	double sum;
	scanf("%d", &n);
	double fib[n+1]; //��Ϊ ��nλ��fib[n]/fib[n-1],����fib[]Ҫȡ����fib[n]λ ��Ҳ����˵fib�ܹ���n+1�ĳ��� 
	//����쳲��������� 
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
