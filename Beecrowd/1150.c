//https://judge.beecrowd.com/en/problems/view/1150

#include<stdio.h>
int main(){
    int x,z,i,n;
    n=0;
    x=0;
    z=0;
    scanf("%d",&x);
    do{
        scanf("%d",&z);
    }while(z<=x);
    for(i=x;i>=z;i++){
       n=x;
       n+=1;
    }
    printf("%d\n",x);
     printf("%d\n",n);
    printf("%d\n",z);

}