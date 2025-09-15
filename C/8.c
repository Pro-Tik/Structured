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
    for(i=a;i<b;i++){
        if(i%2 != 0){
            sum += i;
        }

    }

    printf("%d\n",sum);
}