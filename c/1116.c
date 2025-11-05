//https://judge.beecrowd.com/en/problems/view/1116
#include<stdio.h>
int main(){
    int N,i,X,Y;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%d%d",&X,&Y);
        if(Y != 0){
            float z= (float)X/Y;
            printf("%.1f\n",z);    
        }
        else{
            printf("divisao impossivel\n");
        }
    }
}
