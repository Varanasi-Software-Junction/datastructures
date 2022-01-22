#include<stdio.h>
int main()
{// this program find value y=x^n 
    int x,n,i;
    int mult=1,count;
    printf("Enter the value of x ");
    scanf("%d",&x);
    printf("Enter the number of terns n ");
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    {
   mult=mult*x;
    
   printf("%d X ",x);
    }
   mult=mult*x;
   printf("%d = %d ",x,mult);
    return 0;
}