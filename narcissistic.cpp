#include<stdio.h>
//��ӡˮ�ɻ�������3λ���ģ���dotcpp 1016 
int main(){
	//��100ѭ����1000��{while{ÿ��ȡ��ȡ�����һλ������������}������ܵ�ֵ����ԭ����ֵ�����} 
	int sum = 0;
	int n, temp;
	for(int i=100;i<1000;i++){
		temp = i;
		sum = 0;
		while(temp > 0){
			n = temp % 10;
			sum += n * n * n;
			temp /= 10;
			//printf("i=%d,n=%d,sum=%d\n", i, n, sum);
		}
		if (sum == i){
			printf("%d\b", i);
		}
	}
	
	return 0;
} 
