#include<stdio.h>
//建立素数表，构造一个长度为number的素数表
//下标代表数，下标对应的值为1，说明是素数，为0则不是素数
//初始化所有的下标值都为1
// 从2开始循环，(int s=2;s*i<n;i++){令isPrime[s*i]=0，这样s的倍数就都不是素数了} 
//去掉所 有这些倍数之后，剩下的就都是素数了 
int main(){
	int number;
	scanf("%d", &number);
	int isPrime[number] = {2};

	for(int i=0;i<number;i++){
		isPrime[i] = 1;
	}
	for(int s=2;s<number;s++){
		if(isPrime[s]){
			for(int i=2;i*s<number;i++){
				isPrime[i*s] = 0;
			}
		}
	}
	for(int i=2;i<number;i++){ //从2开始 d
		if(isPrime[i]){
			printf("%d\t", i);
		}
	}
	
	return 0;
} 
