#include<stdio.h>

int main()
{
    int i,arr[25],prsnt=0,num;
   
    printf("plase enter 25 number:\n");
    for(i=0;i<25;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n\n please enter the number to be ");
    scanf("%d",&num);
    for(i=0;i<25;i++)
    {
        if(num==arr[i])
        prsnt=prsnt+1;
    }
    if(prsnt==0){
        printf("\n\n number does not present in the arry\n");
    }
    else{
        printf("\n\n number presents in the arry\n");
        printf("\n number of the apper=%d\n",prsnt);
    }
   
    }
