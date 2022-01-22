#include<stdio.h>
int main()
{
    int i,j,k;
    int n=6,x=1;
    for(i=1;i<=n;i++)//row
    {
        for(k=1;k<=i;k++)
        printf("%d\t",k);
        printf("\n");
    }
    return 0;
}