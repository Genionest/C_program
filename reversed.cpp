#include<stdio.h>
int main()
{
    int Number[10];
    for (int i=0;i<10;i++){
        scanf("%d", &Number[i]);
    }
    for(int i=9;i>=0;i--){
        if (i == 0){
            printf("%d", Number[i]);
        }else{
            printf("%d ", Number[i]);
        }
    }
    
    return 0;
}
