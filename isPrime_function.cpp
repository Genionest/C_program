#include<stdio.h>
#include<math.h>
//ÅÐ¶ÏËØÊýµÄº¯Êý£¬dotcpp1029
int isPrime(int);

int main(){
	int n;
	scanf("%d", &n);
	if(isPrime(n)){
		printf("not prime");
	}else{
		printf("prime");
	}
	
	return 0;
} 

int isPrime(int n){
	double temp;
	int ret = 0;
	temp = sqrt(n);
	if (n % 2 == 0){
		ret = 1;
//		printf("Wow\n");
	}
	for(int i=3;i<=temp;i=i+2){
		if (n % i == 0){
			ret = 1;
			break;
		}
	}
	return ret;
}
