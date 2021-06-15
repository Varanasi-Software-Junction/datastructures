#include<iostream>
using namespace std;

void partition(int a[], int l, int r)
{
    if(l>=r)
    return;
    int pivot=a[l];
    int ls=l;
    int t;
    for(int i=l+1; i<=r; i++)
    {
        if(pivot<=a[i])
         continue;
        
        ls++;
        t=a[i];
        a[i]=a[ls];
        a[ls]=t;

    }
    t=a[l];
    a[l]=a[ls];
    a[ls]=t;
partition(a,l,ls-1);
partition(a,ls+1,r);

}
int main()
{
    int a[] ={5,22,2,17,-5};
    int size = sizeof(a)/sizeof(int);
    partition(a,0,size-1);
    for(int i=0; i<=size-1;i++)
     cout<<a[i]<<",";
    return 0;
}