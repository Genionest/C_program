#include<stdio.h>

int main()
{
	//���� 
	int n, count = 0;
	int t, sum = 0;
	int a, b = 1;
	scanf("%d", &n);
	//��ȡλ����ѭ���Գ�10��Ϊ0Ϊֹ 
	t = n;
	do{
		t = t / 10;
		count++; 
	}while(t > 0);
	printf("%d\n", count);
	//ȡ��n�ĸ�λ���֣�
	t = n;
	for(int i=1;i<count;i++)b*=10;
	while(b > 0){ //����Ҳ����Ϊt>0�������100��ȡ��һ�ξ�Ϊ0�� 
		if(b < 10){ //��������Ϊt<10�������100��ȡ��һ��֮��ͳ�0�ˣ��ͻỻ���� 
			printf("%d\n", t / b);
		}else{
			printf("%d ", t / b);
		}
		t = t % b; //ȡ��b�����ܰ����λȥ�� 
		b /= 10;
	} 
	//����ѭ��{a=nȡ��10��Ȼ��n�Գ�10��sum=sum*10+a}��sum���������ֵ 
	t = n;
	while(t > 0)
	{
		a = t % 10;
		sum = sum * 10 + a;
		t /= 10;
	}
	//��������ֵ
	printf("%d", sum); 
	
	return 0;
}
