#include<stdio.h>
#define N 55
//声明cows[n]年数-母牛数 表,input[n] 输入值 表 ，a 记录输入次数，cows_number()年数-母牛数表生成函数 
void cows_number();
int cows[N], input[N];

int main()
{
	//声明a 
    int a = 0;
    //调用cows_nubmer()生成cows[]
	cows_number(); 
    //循环将输入值添加到 input[] 中 
    do{
        scanf("%d", &input[a]);
    }while(input[a++] != 0); //当input[a] = 0时， 由于a++, 所以最后a = a+1 ,此时a已经比input[]数组长度大1 
    //循环读取input[] 里的输入值作为年数，通过 cows[] 输出对应的母牛数 
    for(int i=0;i<a-1;i++) // 这里a-1 ,就等于数组长度了，而数组的最后一项input[a] = 0 ,当 i = a时, 没达到条件不能进入循环 
    {
        printf("%d\n", cows[input[i]-1]); //因为cows[]的下标是从0到54，所以要把input[]获得的输入值-1才能得到对应的值 
    }
        
    return 0;
}
//cows_number function, for(0,N) i<4,cows_number[i]=i+1;else,cows_number[i]=cows_number[i-1]+cows_number[i-3]
void cows_number(void)
{
    for(int i=0;i<N;i++)
    {
        if(i < 4)
        {
            cows[i] = i + 1;
        }else{
            cows[i] = cows[i-1] + cows[i-3];
        }
        //printf("%d\n", cows[i]);
    }
}

