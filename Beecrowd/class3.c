#include<stdio.h>
int main(){
    int a=5,b,c,d;
    b = a++;
    c= ++b;
    d = c--;
    a= --d;
    a=--c;
    printf("%d",a);
    printf("%d",b);
    printf("%d",c);
    printf("%d",d);
}