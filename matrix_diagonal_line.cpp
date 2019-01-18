#include<stdio.h>
#define X 3
//数组求对角线的和，dotcpp2024 
int main(){
	int Number[X][X];
	int sum1 = 0, sum2 = 0;
	for(int i=0;i<X;i++){
		for(int j=0;j<X;j++){
//			if(j == X-1){
//				scanf("%d \n", &Number[i][j]);
//				if(i == X-1){
//					scanf("%d", &Number[i][j]);
//				}
//			}else{
//				scanf("%d ", &Number[i][j]);
//			}
			scanf("%d", &Number[i][j]);
		}
	}
	for(int i=0;i<X;i++){
		sum1 += Number[i][i];
		sum2 += Number[i][X-1-i];
	}
	printf("%d %d", sum1, sum2);
//	{
//	}
	
	
	return 0;
} 
