#include<stdio.h>
//求n个2组成的数的和 ，dotcpp 1013 
int main(){
	int n, sum = 0, add = 0;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++){
//			add = add * 10 + 2;
//		}
//		sum += add; 
//		add = 0; //add用完了需要初始化 
//		真是多次一举
		add = add * 10 + 2;
		sum += add; 
	}
	printf("%d", sum); 
	
	return 0;
} 
