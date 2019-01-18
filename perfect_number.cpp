#include<stdio.h>
//输入一个数，找出小于这个数的完美数，dotcpp1017
int main(){
	long long n;
	long long sum = 0, factor;
	scanf("%d", &n);
	for(int i=1;i<n;i++){
		sum = 0; 
		//r = (i>4)?i/2:i; 这是求质数用的，因为合数必然有一个因子是小于他的平方根的 ,但是一个数的因子除了本身之外一定是小于他的一半的，因为因子至少也要和2相乘 
		//求因数 
		for(int j=1;j<=i/2;j++){
			if (i % j == 0){
				//printf("%d's fact is %d ", i, j);
				sum += j; //sum加上每个因数 
			}
		}
		if (sum == i){
			printf("%lld its factors are ", sum);
			for(int j=1;j<i;j++){
				if (i % j == 0){
					printf("%lld ", j);
				}
			}
			printf("\n");
		}
	}
	
	return 0;
} 
