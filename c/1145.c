//https://judge.beecrowd.com/en/problems/view/1145

#include<stdio.h>
int main(){
    int N,i,limit;
    scanf("%d %d",&N,&limit);
    for(i=1;i<=limit;i++){
        
        printf("%d",i);
        
        if(i % N == 0){
            printf("\n");
        }
        else{
            printf(" ");
        }
    }
    
    
    return 0;
}