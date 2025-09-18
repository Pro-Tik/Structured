//https://judge.beecrowd.com/en/problems/view/1080
#include<stdio.h>

int main(){
    int numbers[100];
    int i,max,pos;
    for(i=0;i<3;i++){
        scanf("%d",&numbers[i]);
    }
    max = numbers[0];
    pos = 1;
    for(i=0;i<3;i++){
        if(numbers[i]>max){
        max = numbers[i];
        pos = i+1;
            
        }
    
    }
    printf("%d\n",max);
    printf("%d",pos);
}