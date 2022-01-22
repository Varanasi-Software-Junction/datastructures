#include<stdio.h>
int main()
{
    // write a program to print yhis petern 1
    int n=5;                              //01 
    int i,j,k,x=1;                        //101
    for(i=1;i<=n;i++)//rows             //0101
    {
        //for(j=1;j<=n-i;j++)//spaces
           // printf(" ");
        x=i % 2;
        for(k=1;k<=i;k++)//stars 
        {

            printf("%d",x);
            x=1-x;
        }
        printf("\n");
    }
    return 0;
}