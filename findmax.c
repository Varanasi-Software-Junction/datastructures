#include<stdio.h>
int main()
{
int a[]={3,2,66,7};
int min=a[0],i;
int n=sizeof(a)/sizeof(int);
for(i=1;i>=n-1;i--)
if(a[i]<min)
min=a[i];
printf("Max = %d",min);
    return 0;
}