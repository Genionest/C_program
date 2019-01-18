#include<stdio.h>
//写一个转置矩阵的函数，dotcpp1030
void transpose(int a[], int, int);
int main(){
	int number[9];
	//传入一维数组，再转化成二位数组，再转置
	for(int i=0;i<3*3;i++){
		scanf("%d", &number[i]);
	} 
	
	transpose(number, 3, 3);
	
	return 0;
}

void transpose(int number[], int x, int y){
	int array[3][3];
	int temp;
	//一维数组转二维数组 
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			array[i][j] = number[i*3+j];
		}
	}
	//转置矩阵
//	for(int i=0;i<x;i++){
//		for(int j=i+1;j<x;j++){
//			temp = array[i][j];
//			array[i][j] = array[j][i];
//			array[j][i] = temp;
//		}
//	} 
//直接输出也是可以的 
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			printf("%d ", array[j][i]);
			if(i!=x-1 && j==y-1){
				printf("\n");
			}
		}
	}
}
