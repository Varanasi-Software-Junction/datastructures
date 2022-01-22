#include<stdio.h>
int main()
{   //chek the perfect number and not
    int n,i;
    int sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==n)
    {
        printf("It is perfect number");
    }
    else
    {
       printf("It is not perfect number");
    }
    return 0;
    
}