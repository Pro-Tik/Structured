//https://judge.beecrowd.com/en/problems/view/1165
#include<stdio.h>
int main(){
    int N,a,i;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a);
        if(a<=1){
            return 0;
        }
        else if(a==2){
            printf("Prime!\n");
        }
        else if(a==3){
            printf("prime\n");
        }
        
        else{
            int i1;
            for(i1=2;i1<=a/2;i1++){
                if(a%i1==0){
                    printf("Not Prime\n");
                }
                else{
                    printf("Prime\n");
                }
        }
    }

}
}