#include<stdio.h>

int main(){
	int profit, salary;
	int one = 100000 * 0.1;
	int two = 100000 * 0.075;
	int four = 200000 * 0.05;
	int six = 200000 * 0.03;
	int ten = 400000 * 0.015;
	scanf("%d", &profit);
	switch(profit/100000){
		case 0:
			salary = profit * 0.1;
			break;
		case 1:
			salary = (profit-100000) * 0.075 + one;
			break;
		case 2: 
		case 3:
			salary = (profit-200000) * 0.05 + two + one;
			break;
		case 4:
		case 5:
			salary = (profit-400000) * 0.03 + four + two + one;
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			salary = (profit-600000) * 0.015 + six + four + two + one;
		break;
		default:
			salary = (profit-1000000) * 0.01 + six + four + two + one;
	}
	printf("%d", salary);
	return 0;
}
