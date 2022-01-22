#include<stdio.h>
int main()
{
    // x^1+x^2+x^3+x^4.......x^n
    int i,n,x;
    int mult=1;
    printf("Enter the number of x ");
    scanf("%d",&x);
    printf("Enter the terms of n number ");
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