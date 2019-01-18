#include<stdio.h>
//三种模式的数列求和 ，dotcpp 1015 
int main(){
	int a, b, c;
	double suma = 0, sumb = 0, sumc = 0;
	int i;
	scanf("%d %d %d", &a, &b, &c);
	for(i=1;i<=a;i++){
		suma += i;
	}
	for(i=1;i<=b;i++){
		sumb += i * i;
	}
	for(i=1;i<=c;i++){
		sumc += 1.00 / i;
	}

	printf("%.2lf", suma + sumb + sumc); //double对应的是%lf 
	
	return 0;
}
