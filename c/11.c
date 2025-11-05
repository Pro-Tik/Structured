//https://judge.beecrowd.com/en/problems/view/1098
#include<stdio.h>
#include<math.h>
int main(){
    float I,J,loop;
    I=0;
    J=0;
    for(I=0;I<=2.01;I += 0.2){
        for(J=1;J<=3;J++){
            loop = I+J;
            if(fabs(I-(int)I) < 1e-6){
                printf("I=%d ",(int)I);
            }
            else{
                printf("I=%.1f ",I);
            }
            if(fabs(loop-(int)loop) < 1e-6){
                printf("J=%d\n",(int)loop);
            }
            else{
                printf("J=%.1f\n",loop);
        }
    }
    }
}