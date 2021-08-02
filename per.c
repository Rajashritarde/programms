#include<stdio.h>
int main(){
 int per;
 printf("enter the percent:");
 scanf("%d",&per);
 if(per>=75)
 printf("distinction");
 else if(per<75 && per>=60)
 printf(" 1st div");
 else if(per<60 && per>=45)
 printf("2nd div");
 else if(per<45 && per>=35)
 printf("3rd div");
 else
 printf("you want more marks");






}
