#include<stdio.h>
#define N 10
//ѡ������ ,dotcpp1023
int main(){
	int Number[N]; 
	int min, index;
	for(int i=0;i<N-1;i++){
		scanf("%d ", &Number[i]);
	}
	scanf("%d", &Number[N-1]);
	//��ѭ���ǰ���С�����䵽��ǰ���Ǹ�û���������Ҫ��ľ��ǵ�ǰ��i ,����Ҫһ������¼�������ĸ��±��Ԫ�� 
	for(int i=0;i<N-1;i++){ //���һ�β����ţ�ǰ����ź��ˣ����һ����Ȼ�ͺ��� 
		min = Number[i];
		index = i;
		for(int j=N-1;j>=i;j--){ //���ѭ���ȴ�С ��ֻѭ������ǰ��i 
			 if(min > Number[j]){
			 	min = Number[j]; //min������С��ֵ 
			 	index = j;//index�������ֵ���±� 
			 } 
//			 printf("min=%d,index=%d\n", min, index);
		} 
//		printf("--------\n");
//		{
//		for(int i=0;i<N;i++){
//			printf("%d ", Number[i]);
//		}
//		printf("\n----------\n");
//		}
		Number[index] = Number[i]; //��������Ԫ�ص�ֵ 
		Number[i] = min;
	}
	for(int i=0;i<N;i++){
		printf("%d\n", Number[i]);
	}
	
	return 0;
}
