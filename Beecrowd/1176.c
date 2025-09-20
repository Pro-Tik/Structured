//https://judge.beecrowd.com/en/problems/view/1176


#include<stdio.h>
int main(){
    int a,i,N,t1,t2;
    scanf("%d",&N);
    t1=0;
    t2 = 1;
    for(i=0;i<N;i++){
        
        t1=t2;
        printf("%d\n",t1);
        printf("%d\n",t2);
        t1= t1 + t2;
        



    }

}