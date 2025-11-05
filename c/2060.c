//https://judge.beecrowd.com/en/problems/view/2060

#include<stdio.h>


int main(){
    int N,i,a,b,c,d;
    a=0;
    b=0;
    c=0;
    d=0;
    int num[1000];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&num[i]);
        if(num[i]%2==0){
            a+=1;
            
        }
        if(num[i]%3==0){
            b+=1;
        }
        if(num[i]%4==0){
            c+=1;
        }
        if(num[i]%5==0){
            d+=1;
        }
        
    }
    printf("%d Multiplo(s) de 2\n",a);
    printf("%d Multiplo(s) de 3\n",b);
    printf("%d Multiplo(s) de 4\n",c);
    printf("%d Multiplo(s) de 5\n",d);
}