//https://judge.beecrowd.com/en/problems/view/1133
#include<stdio.h>
int main(){
    int a,b,temp,i;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    for(i=a;i<b;i++){
        if(i%5 ==2 || i%5 ==3){
            printf("%d\n",i);
        }
    }
}