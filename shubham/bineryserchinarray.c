#include<stdio.h>
int main()
{
    int a[]={1,3,2,5,6,8,7};
    int n=sizeof(a)/sizeof(int);
    int l=0,r=n-1,mid;
    int x=10;
    while(1)
    {
        mid=(l+r)/2;
        if(a[mid]==x)
        {
            printf("found %d ",mid);
            return 0;
        }
        if (x<a[mid])
        {
          r=mid-1;
        }
        else
        {
            l=mid+1;
        }
        if(l>r)
        {
        printf("not found");
        return 0;
        }
    
        
        
    
        
        
        

    }




}