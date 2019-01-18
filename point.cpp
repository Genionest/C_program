#include <stdio.h>

void f(int g);

int main( void )
{
	int i = 6;
	int j;
	int k;
	int *p = &i;
	int *q = &k;
	k = *p; //*p此时是6，而k的指针不是p，所以不随*p改变而改变 
	*p = 5;
	f(i);
	printf("i = %d\n",i);
	printf("k = %d\n",k);
	printf("&i = %p\n",p);
	printf("&k = %p\n",q);
	printf("&p = %p\n",&p);
	printf("&q = %p\n",&q); 
	
	return 0;
}

void f(int g)
{
	printf("g = %d\n",g);
	printf("&g = %p\n",&g);
}
