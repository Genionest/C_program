#include <stdio.h>
int main(){
	int number[5],count = 0,i = 0;
	for(i=0;i<5;i++){ //�������ascii��-48����number[]�� 
		int temp = 0; //���Ǹ�����ʼֵ�ȽϺ�
		temp = getchar();
		if(temp == 10)break; //'\n'��10
		temp -= 48; //'0'��48 
		number[i] = temp; 
		count++;
	} 
	//���λ��
	printf("%d\n", count);
	//ȡ��ÿһλ��
	for(i=0;i<count-1;i++){ //��������һλ������Ҫ-1�����count=1����ô���ѭ������ִ�У����õ��� 
		printf("%d ", number[i]); 
	}
	printf("%d\n", number[count-1]); 
	//����
	for(i=count-1;i>=0;i--){ //������������ν�����һλ��ȡ��0�� 
		printf("%d", number[i]);
	} 
	return 0;
}
