//WAP to check whether a number is prime or not.
# include<stdio.h>
int main()
{
int num,i,flag=0;
printf("enter a number");
scanf("%d",&num);
for(i=2;i<num;i++)
{
if(num%2==0)
{
flag=1;
break;
}
}
if(num==1)
printf("the given no is neither prime nor composite");
if(flag==0)
printf("the given number is prime number");
else
printf("not a prime number");
return 0;
}

