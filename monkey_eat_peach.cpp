#include<stdio.h>
//猴子吃桃子问题，猴子每天吃掉一半然后又吃掉一个，到第n天早上再想吃的时候，只剩1个，dotcpp1020
int main(){
	int n, sum = 1;
	scanf("%d", &n);
	for(int i=1;i<n;i++){ //第n天并没有吃 
		sum = ++sum * 2;
	}
	printf("%d", sum);
//	while(n > 1){
//		n = n / 2;
//		n--;
//		sum++;
//	}
//	printf("%d", sum);
	
	return 0;
}
