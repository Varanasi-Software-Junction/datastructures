#include<stdio.h>
int main()
{
int a[]={12,3,4,5,6,7,9,0,};
int n=sizeof(a)/sizeof(int);
int i,j,k;
for(i=0;i<=n-1;i++)
printf("%d,",a[i]);


for(i=0; i<=n-1; i++)
{
    if(a[i]<a[i+1])
    continue; 
    k=a[i+1];
    j=i+1;
    while(j>=1 && a[j-1]>k)
    {
       a [j]=a[j-1];
        j--;
    } 
    a[j]=k;
}


printf("\n");
    for(i=0;i<=n-1;i++)
printf("%d,",a[i]);



 
return 0;
}