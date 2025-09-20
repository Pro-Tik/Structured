#include<stdio.h>
int main(){
    int a=5,b,c,d;
    b = a++;
    c= ++b;
    d = c--;
    a= --d;
    a=--c;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
}