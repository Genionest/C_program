#include<stdio.h>
#define N 55
//����cows[n]����-ĸţ�� ��,input[n] ����ֵ �� ��a ��¼���������cows_number()����-ĸţ�������ɺ��� 
void cows_number();
int cows[N], input[N];

int main()
{
	//����a 
    int a = 0;
    //����cows_nubmer()����cows[]
	cows_number(); 
    //ѭ��������ֵ��ӵ� input[] �� 
    do{
        scanf("%d", &input[a]);
    }while(input[a++] != 0); //��input[a] = 0ʱ�� ����a++, �������a = a+1 ,��ʱa�Ѿ���input[]���鳤�ȴ�1 
    //ѭ����ȡinput[] �������ֵ��Ϊ������ͨ�� cows[] �����Ӧ��ĸţ�� 
    for(int i=0;i<a-1;i++) // ����a-1 ,�͵������鳤���ˣ�����������һ��input[a] = 0 ,�� i = aʱ, û�ﵽ�������ܽ���ѭ�� 
    {
        printf("%d\n", cows[input[i]-1]); //��Ϊcows[]���±��Ǵ�0��54������Ҫ��input[]��õ�����ֵ-1���ܵõ���Ӧ��ֵ 
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

