#include<stdio.h>

int main(){
	double n = 1, m = 2, sum = 0, temp;
	int N;
	scanf("%d", &N);
	//������Ҫ���飬ѭ���仯������ 
	for(int i=0;i<N;i++){
		sum += m / n;
		//����Ҫ���棬���Ծ͸��ʼд��ѭ��һ�� 
		temp = m;
		m += n;
		n = temp;
	}
	printf("%.2lf", sum);
	
	return 0;
}
