#include<stdio.h>
//��n���׳˵ĺͣ��������ν����� ��dotcpp 1014 
int main(){
	int n;
	long long sum = 0, fact = 1; //sum��ȡֵ��Χ̫���ˣ�����Ҫ�ô����� 
	scanf("%d", &n);
	for (int i=1;i<=n;i++){ //i++ʵ��ִ�������������ſ�ʼ�ģ� 
		fact = fact * i;
		sum += fact;
	} 
	printf("%lld", sum); //�����Ҫע������ 
	
	return 0;
} 
