#include<stdio.h>
int main(){
    int N,x,i;
    scanf("%d",&N);
    for(i=0;i<=N;i++){
    scanf("%d",&x);
    if(x>0 && x%2 != 0){
        printf("ODD POSITIVE\n");
    }
    if(x<0 && x%2 != 0){
        printf("ODD NEGATVE\n");
    }
    if(x>0 && x%2 == 0){
        printf("EVEN POSITIVE\n");
    }
    if(x<0 && x%2 == 0){
        printf("EVEN NEGATVE\n");
    }
    if(x==0){
        printf("NULL\n");
    }
    }
}