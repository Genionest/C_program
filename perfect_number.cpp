#include<stdio.h>
//����һ�������ҳ�С�����������������dotcpp1017
int main(){
	long long n;
	long long sum = 0, factor;
	scanf("%d", &n);
	for(int i=1;i<n;i++){
		sum = 0; 
		//r = (i>4)?i/2:i; �����������õģ���Ϊ������Ȼ��һ��������С������ƽ������ ,����һ���������ӳ��˱���֮��һ����С������һ��ģ���Ϊ��������ҲҪ��2��� 
		//������ 
		for(int j=1;j<=i/2;j++){
			if (i % j == 0){
				//printf("%d's fact is %d ", i, j);
				sum += j; //sum����ÿ������ 
			}
		}
		if (sum == i){
			printf("%lld its factors are ", sum);
			for(int j=1;j<i;j++){
				if (i % j == 0){
					printf("%lld ", j);
				}
			}
			printf("\n");
		}
	}
	
	return 0;
} 
