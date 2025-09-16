#include<stdio.h>
int main(){
    int N,i;
    while(1){
    scanf("%d",&N);
    if(N>0){
        for(i=1;i<=N-1;i++){
            printf("%d ",i);
        }
        printf("%d\n",(int)N);
    }
    else if(N==0){
        return 0;
    }
}
}