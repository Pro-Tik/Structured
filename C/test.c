//https://judge.beecrowd.com/en/problems/view/1071
#include<stdio.h>
int main(){
    int a,b,i,temp;
    int sum=0;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    printf("%d\n %d \n %d \n %d\n ",sum,a,b,i,temp);
}