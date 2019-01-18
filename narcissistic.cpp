#include<stdio.h>
//打印水仙花数，（3位数的），dotcpp 1016 
int main(){
	//从100循环到1000，{while{每次取余取出最后一位数，立方加总}如果加总的值等于原来的值，输出} 
	int sum = 0;
	int n, temp;
	for(int i=100;i<1000;i++){
		temp = i;
		sum = 0;
		while(temp > 0){
			n = temp % 10;
			sum += n * n * n;
			temp /= 10;
			//printf("i=%d,n=%d,sum=%d\n", i, n, sum);
		}
		if (sum == i){
			printf("%d\b", i);
		}
	}
	
	return 0;
} 
