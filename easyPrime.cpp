#include<stdio.h>
//求素数，dotcpp1022 
int main(){
	int N;
	int temp, ret;
	scanf("%d", &N);
	printf("2\n");
	if(N >= 3)printf("3\n");
	for(int i=5;i<=N;i=i+2){//加2是被判断是否为素数的数 
		ret = 1;
		for(int j=2;j<i/2;j++){
			if(i % j == 0){
				ret = 0;
				break;
			}
		}
		if(ret){
			printf("%d\n", i);
		}
	}
}
