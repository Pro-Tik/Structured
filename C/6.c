#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        if(a>=1 && a<=1000 && a%2 != 0){
            printf("%d",a);
        }
    }
}