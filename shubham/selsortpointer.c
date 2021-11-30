#include<stdio.h>
int main()
{
    int a[]={10,23,45,6,8,9,1};
    int n=sizeof(a)/sizeof(int);
    int i,j,t;
    for(i=0; i<n-1; i++)
    {
        if(a[i]<=a[i+1])
        continue;
    
    t=a[i+1];
    j=i+1;
    while(j>1 && a[j-1]>t)
    { 
    a[j]=a[j-1];
    j--;
    }
a[j]=t;
}
        printf("\n");
        for(i=1; i<=n-1; i++)
        {
            printf("%d,",a[i]);
        }
        return 0;
    
    

}
