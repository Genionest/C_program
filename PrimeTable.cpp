#include<stdio.h>
//��������������һ������Ϊnumber��������
//�±���������±��Ӧ��ֵΪ1��˵����������Ϊ0��������
//��ʼ�����е��±�ֵ��Ϊ1
// ��2��ʼѭ����(int s=2;s*i<n;i++){��isPrime[s*i]=0������s�ı����Ͷ�����������} 
//ȥ���� ����Щ����֮��ʣ�µľͶ��������� 
int main(){
	int number;
	scanf("%d", &number);
	int isPrime[number] = {2};

	for(int i=0;i<number;i++){
		isPrime[i] = 1;
	}
	for(int s=2;s<number;s++){
		if(isPrime[s]){
			for(int i=2;i*s<number;i++){
				isPrime[i*s] = 0;
			}
		}
	}
	for(int i=2;i<number;i++){ //��2��ʼ d
		if(isPrime[i]){
			printf("%d\t", i);
		}
	}
	
	return 0;
} 
