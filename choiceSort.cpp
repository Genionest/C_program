#include<stdio.h>
#define N 10
//选择法排序 ,dotcpp1023
int main(){
	int Number[N]; 
	int min, index;
	for(int i=0;i<N-1;i++){
		scanf("%d ", &Number[i]);
	}
	scanf("%d", &Number[N-1]);
	//外循环是把最小的数变到最前面那个没变过的数，要变的就是当前的i ,还需要一个数记录换的是哪个下标的元素 
	for(int i=0;i<N-1;i++){ //最后一次不用排，前面的排好了，最后一个自然就好了 
		min = Number[i];
		index = i;
		for(int j=N-1;j>=i;j--){ //这个循环比大小 ，只循环到当前的i 
			 if(min > Number[j]){
			 	min = Number[j]; //min储存最小的值 
			 	index = j;//index储存这个值得下标 
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
		Number[index] = Number[i]; //互换两个元素的值 
		Number[i] = min;
	}
	for(int i=0;i<N;i++){
		printf("%d\n", Number[i]);
	}
	
	return 0;
}
