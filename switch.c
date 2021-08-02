#include<stdio.h>
int main(){
int a,b,c;
printf("enter the choice\n");

scanf("%d",&c);
switch(c)
{
case 1:
printf("enter the numbers");
scanf("%d%d",&a,&b);
if(a>b)
printf("a is greater");
else
printf("b is smaller1");
break;
case 2:
printf("enter the numbers",a,b);
scanf("%d%d",&a,&b);
if(a==b)
printf("the numbers are equal");
else
printf("the number is not equal");
break;
default:
printf("all cases are successfully implemnted");



}




}