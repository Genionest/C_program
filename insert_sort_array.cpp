#include<stdio.h>
#define N 9
//往一个已经排好的数组里面插入数，按照原来的规则排列，dotcpp2025 
//说实话，我的算法，很烂 
int main(){
	int array[N+1];
	int n, temp = 9; //temp默认为最后 
	int sort = 1;
	for(int i=0;i<N;i++){
		scanf("%d", &array[i]);
	}
	scanf("%d", &n);
	if(array[0] > array[N-1]){
		sort = 0;
	}
	for(int i=0;i<N;i++){ //找到那个要插入的地址，就可以跳出了 
		if ((sort && n <= array[i]) || (!sort && n >= array[i])){
			temp = i;
			break;
		}
	}//如果没有找到，就说明在最后，就用默认的 
	for(int i=N;i>=temp;i--){//比temp大的往后移动一位 
		array[i+1] = array[i];
	} 
	array[temp] = n;//插入n 
	for(int i=0;i<N+1;i++){
		printf("%d\n", array[i]);
	}
	
	return 0;
}
