#include<stdio.h>
//дһ��ת�þ���ĺ�����dotcpp1030
void transpose(int a[], int, int);
int main(){
	int number[9];
	//����һά���飬��ת���ɶ�λ���飬��ת��
	for(int i=0;i<3*3;i++){
		scanf("%d", &number[i]);
	} 
	
	transpose(number, 3, 3);
	
	return 0;
}

void transpose(int number[], int x, int y){
	int array[3][3];
	int temp;
	//һά����ת��ά���� 
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			array[i][j] = number[i*3+j];
		}
	}
	//ת�þ���
//	for(int i=0;i<x;i++){
//		for(int j=i+1;j<x;j++){
//			temp = array[i][j];
//			array[i][j] = array[j][i];
//			array[j][i] = temp;
//		}
//	} 
//ֱ�����Ҳ�ǿ��Ե� 
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			printf("%d ", array[j][i]);
			if(i!=x-1 && j==y-1){
				printf("\n");
			}
		}
	}
}
