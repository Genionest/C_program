#include<stdio.h>
#define N 9
//��һ���Ѿ��źõ��������������������ԭ���Ĺ������У�dotcpp2025 
//˵ʵ�����ҵ��㷨������ 
int main(){
	int array[N+1];
	int n, temp = 9; //tempĬ��Ϊ��� 
	int sort = 1;
	for(int i=0;i<N;i++){
		scanf("%d", &array[i]);
	}
	scanf("%d", &n);
	if(array[0] > array[N-1]){
		sort = 0;
	}
	for(int i=0;i<N;i++){ //�ҵ��Ǹ�Ҫ����ĵ�ַ���Ϳ��������� 
		if ((sort && n <= array[i]) || (!sort && n >= array[i])){
			temp = i;
			break;
		}
	}//���û���ҵ�����˵������󣬾���Ĭ�ϵ� 
	for(int i=N;i>=temp;i--){//��temp��������ƶ�һλ 
		array[i+1] = array[i];
	} 
	array[temp] = n;//����n 
	for(int i=0;i<N+1;i++){
		printf("%d\n", array[i]);
	}
	
	return 0;
}
