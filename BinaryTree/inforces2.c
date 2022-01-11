#include<stdio.h>
int main()
{
    int a[]={1,2,3};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
            for(int k=0;k<=n-1;k++)
    
    printf("\n%d %d %d,",a[i],a[j],a[k]);
        }
    }
    

}