//https://judge.beecrowd.com/en/problems/view/1101
#include<stdio.h>
int main(){
    int a,b,i,sum,temp;
    while(1){
    
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    if(a <= 0 || b<=0){
        return 0;
    }
        sum = 0;
        for(i=a;i<=b;i++){
            printf("%d ",i);
            sum += i;
        }
        printf("Sum=%d\n",sum);
    }
}