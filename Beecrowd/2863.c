//https://judge.beecrowd.com/en/problems/view/2863

#include<stdio.h>
#include<math.h>

int main(){
    int T,x,y,i;
    scanf("%d",&T);
    double max=999999999999999;
    double att[T];
   
    if(T>=2 && T<= 99){
        for(i=0;i<T;i++){
            scanf("%lf",&att[i]);
            
            if(att[i]<max){
                max = att[i];
            }


        }
        printf("%.2f\n",max);
    }
    else{
        return 0;
    }
}