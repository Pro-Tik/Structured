#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>0 && x%2 != 0){
        printf("ODD POSITIVE");
    }
    if(x<0 && x%2 != 0){
        printf("ODD NEGATVE");
    }
    if(x>0 && x%2 == 0){
        printf("EVEN POSITIVE");
    }
    if(x<0 && x%2 == 0){
        printf("EVEN NEGATVE");
    }
    if(x==0){
        printf("NULL");
    }

}