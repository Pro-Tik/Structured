//https://judge.beecrowd.com/en/problems/view/1176


#include<stdio.h>
int main(){
    int a,i,N,t1,t2,t3;
    scanf("%d",&N);
    t1=0;
    t2 = 1;
    for(i=0;i<N;i++){
        
        
        printf("%d\n",t1);
        
        t3 = t1 + t2;
        t1=t2;
        t2= t3;
       

        



    }

}