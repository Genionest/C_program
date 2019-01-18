#include<stdio.h>
#include<math.h>
//����������������κ����ĸ���dotcpp1028
void positiveQuadratic(int, int, int, int);
void zeroQuadratic(int, int);
void negativeQuadratic(int, int, int, int);

int main(){ 
	int a, b, c;
	int D;
	scanf("%d %d %d", &a, &b, &c);
	D = b * b - 4 * a * c;
	if (D > 0){
		positiveQuadratic(a, b, c, D); 
	}else if (D == 0){
		zeroQuadratic(a, b);
	}else if (D < 0){
		negativeQuadratic(a, b, c, D);
	}
	
	return 0;
}
//�����ĸ�Ϊ-b+sqrt(b^2-4ac)/2a, -b-sqrt(b^2-4ac)/2a 
//sqrt()����ƽ���� 
//b^2-4ac>0ʱ
void positiveQuadratic(int a, int b, int c, int D){
	double x1, x2, d;
	int A;
	d = sqrt(D);
//	printf("-b=%d\n", -b);
//	printf("b^2-4ac=%d\n", b*b-4*a*c);
//	printf("2a=%d\n", 2*a);
//	printf("D = %lf\n", D);
	x1 = ((-b) + d) / (2*a);
	x2 = ((-b) - d) / (2*a);
	printf("x1=%.3lf ", x1);
	printf("x2=%.3lf", x2); 
}

//b^2-4ac=0ʱ
void zeroQuadratic(int a, int b){
	double x1, x2;
	x1 = (-b)/(2*a);
	x2 = (-b)/(2*a);
	printf("x1=%.3lf ", x1);
	printf("x2=%.3lf", x2);
}

//b^2-4ac<ʱ 
void negativeQuadratic(int a, int b, int c, int D){
	double real, imaginary;
	real = 1.000*(-b)/(2*a); //��һ��int�ڼ�������о��ȶ�ʧ�ˣ�����һ��1.000���Ⱦͻ����� 
//	printf("%d\n", sizeof(real));
	imaginary = sqrt(-D)/(2*a);
//	printf("%d\n", sizeof(imaginary));
	printf("x1=%.3lf+%.3lf", real, imaginary);
	printf("i ");
	printf("x2=%.3lf-%.3lf", real, imaginary);
	printf("i");
}
