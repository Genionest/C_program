#include<stdio.h>
//��n��2��ɵ����ĺ� ��dotcpp 1013 
int main(){
	int n, sum = 0, add = 0;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++){
//			add = add * 10 + 2;
//		}
//		sum += add; 
//		add = 0; //add��������Ҫ��ʼ�� 
//		���Ƕ��һ��
		add = add * 10 + 2;
		sum += add; 
	}
	printf("%d", sum); 
	
	return 0;
} 
