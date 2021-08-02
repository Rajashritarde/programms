#include<stdio.h>
int main(){
    int a=10,b=20;
    printf("a=%d b=%d",a,b);
    swap(a,b);
    printf("a=%d b=%d",a,b);
}
void swap(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;
}