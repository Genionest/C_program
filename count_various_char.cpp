#include<stdio.h>
//�����ͬ�����ַ��ĸ��� 
int main(){
	//count list �� 0��1��2��3λԪ�طֱ𴢴� Ӣ���ַ������֣��ո������ַ� ,dotcpp 1012
	int count[4];
	for (int i=0;i<4;i++){
		count[i] = 0;
	}
	while(int temp = getchar()){
		if ((temp>=65 && temp<=90)||(temp>=97 && temp<=122)){
			count[0]++;
		}else if (temp>=48 && temp<=57){
			count[1]++;
		}else if (temp == 32){
			count[2]++;
		}else if (temp == 10){
			break;
		}else{
			count[3]++;
		}
	}
	printf("%d %d %d %d", count[0], count[1], count[2], count[3]);
	return 0;
}
