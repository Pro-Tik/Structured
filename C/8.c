//https://judge.beecrowd.com/en/problems/view/1071
#include<stdio.h>
int main(){
    int a,b,i,sum;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<b;i++){
        if(i%2 != 0){
            sum = sum +i;
        }

    }
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",i);
    printf("%d\n",sum);
}