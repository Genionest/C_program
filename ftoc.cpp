#include<stdio.h>

int main()
{
	float F, C;
	scanf("%f", &F);
	C = 5 * (F - 32) / 9.0;
	printf("c=%.2f", C);
	
	return 0;
}
