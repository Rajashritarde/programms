#include <stdio.h>
int main()
{
    int r,i,c,j,A[2][2],B[2][2],sum[2][2];
    printf("Enter of row colum of matrix\n");
    scanf("%d%d",&r,&c);
    printf("Enter the first:A matrix\n"); 
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
 
    scanf("%d",&A[i][j]);


        printf("Enter the first:B matrix\n"); 
    
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
   
    scanf("%d",&B[i][j]);
    printf("\n sum of element matrices\n");
  
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {

         sum[i][j]= A[i][j]+B[i][j];


         printf("%d\t",sum[i][j]);

        }
        printf("\n");
    }
}

