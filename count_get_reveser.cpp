#include<stdio.h>

int main()
{
	//输入 
	int n, count = 0;
	int t, sum = 0;
	int a, b = 1;
	scanf("%d", &n);
	//获取位数，循环自除10，为0为止 
	t = n;
	do{
		t = t / 10;
		count++; 
	}while(t > 0);
	printf("%d\n", count);
	//取出n的各位数字，
	t = n;
	for(int i=1;i<count;i++)b*=10;
	while(b > 0){ //条件也不能为t>0，如果是100，取余一次就为0了 
		if(b < 10){ //条件不能为t<10，如果是100，取余一次之后就成0了，就会换行了 
			printf("%d\n", t / b);
		}else{
			printf("%d ", t / b);
		}
		t = t % b; //取余b，才能把最高位去掉 
		b /= 10;
	} 
	//逆序，循环{a=n取余10，然后n自除10，sum=sum*10+a}，sum就是逆序的值 
	t = n;
	while(t > 0)
	{
		a = t % 10;
		sum = sum * 10 + a;
		t /= 10;
	}
	//输出逆序的值
	printf("%d", sum); 
	
	return 0;
}
