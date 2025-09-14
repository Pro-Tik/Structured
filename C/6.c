#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        if(i>=1 && i<=1000 && i%2 != 0){
            printf("%d\n",i);
        }
    }
}