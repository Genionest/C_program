#include<stdio.h>

int main(){
	double n = 1, m = 2, sum = 0, temp;
	int N;
	scanf("%d", &N);
	//并不需要数组，循环变化就是了 
	for(int i=0;i<N;i++){
		sum += m / n;
		//不需要储存，所以就跟最开始写的循环一样 
		temp = m;
		m += n;
		n = temp;
	}
	printf("%.2lf", sum);
	
	return 0;
}
