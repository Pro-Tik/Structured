//https://judge.beecrowd.com/en/problems/view/1144
#include<stdio.h>
#include<math.h>

int main(){
    int N,b,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        
        printf("%d %.0f %.0f\n",i,pow(i,2),pow(i,3));
        printf("%d %d %d\n",(int)i,(int)pow(i,2)+1,(int)pow(i,3)+1);
    }
}