#include<stdio.h>
//计算弹球第n次落地时弹起的高度，落地时经过的总距离
int main(){
	double M, N, sum = 0, height = 0;
	scanf("%lf %lf", &M, &N);
	for(int i=0;i<N;i++){
		sum = sum + height + M; 
		height = M / 2;
		M = height;
	}
	printf("%.2lf %.2lf", height, sum);
	
	return 0;
} 
