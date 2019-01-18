#include <stdio.h>
int main(){
	int number[5],count = 0,i = 0;
	for(i=0;i<5;i++){ //将输入的ascii码-48传入number[]中 
		int temp = 0; //还是给个初始值比较好
		temp = getchar();
		if(temp == 10)break; //'\n'是10
		temp -= 48; //'0'是48 
		number[i] = temp; 
		count++;
	} 
	//输出位数
	printf("%d\n", count);
	//取出每一位数
	for(i=0;i<count-1;i++){ //不输出最后一位，所以要-1；如果count=1，那么这个循环不会执行，不用担心 
		printf("%d ", number[i]); 
	}
	printf("%d\n", number[count-1]); 
	//逆序
	for(i=count-1;i>=0;i--){ //换不换行无所谓，最后一位就取到0咯 
		printf("%d", number[i]);
	} 
	return 0;
}
