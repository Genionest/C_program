#include<stdio.h>
//���ӳ��������⣬����ÿ��Ե�һ��Ȼ���ֳԵ�һ��������n����������Ե�ʱ��ֻʣ1����dotcpp1020
int main(){
	int n, sum = 1;
	scanf("%d", &n);
	for(int i=1;i<n;i++){ //��n�첢û�г� 
		sum = ++sum * 2;
	}
	printf("%d", sum);
//	while(n > 1){
//		n = n / 2;
//		n--;
//		sum++;
//	}
//	printf("%d", sum);
	
	return 0;
}
