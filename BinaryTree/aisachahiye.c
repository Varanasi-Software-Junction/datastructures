#include<stdio.h>
int main()
{
    // x^1+x^2+x^3+x^4.......x^n
    int i,n=4,x=2;
    int total=0;
    int mult=1;
    //printf("Enter the number of x ");
    //scanf("%d",&x);
    //printf("Enter the terms of n number ");
    //scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    {
        
   mult=mult*x;
    total+=mult;
   printf("%d^%d(%d)+ ",x,i,mult);
    }
   mult=mult*x;
   total+=mult;
    printf("%d^%d(%d)=%d ",x,i,mult,total);
    
    return 0;
    
}