#include<iostream>
using namespace std;
void merge(int a[], int l,  int r)
{
    //l to mid, mid +1 to r 
    // merge into array c
    //copy bback into 
    // c size = r-l + 1
    if(l>=r)
    return;
    int mid=(l+r)/2;
    merge(a,l,mid);
    merge(a,mid+1,r);
int i=l,j=mid+1,k=0;
int c[r-l+1];
while (i<=mid && j<=r)
{
    if(a[i]<a[j])
    {
c[k]=a[i];
i++;
k++;
    }
    else
    {
    
        c[k]=a[j];
        j++;
        k++;

    }
}
//End of While
if(i<=mid)
{
for(;i<=mid;i++)
c[k++]=a[i];
}
else
{
for(;j<=r;j++)
c[k++]=a[j];
}
//End of merge
for(i=l;i<=r;i++)
a[i]=c[i-l];





}
int main()
{
    int a[]={2,4};
    int b[]={3,5,6,10,16,1,7,17,8,1,-19,100};
    int sizea= sizeof(a)/sizeof(int);
    int sizeb= sizeof(b)/sizeof(int);
    //int c[sizea+sizeb];
  //  int i=0,j=0, l=0;
   /*
   
    while(i<=sizea-1 || j<=sizeb)
    {
        if(a[i]<b[j])
           { c[l]=a[i];
            i++;
            l++;
            continue;
           }
        c[l]=b[j];
        j++;
        l++;
    }
   */
  merge(b,0,sizeb-1);
    for(int k=0; k<=sizeb-1;k++)
    {
        cout<<b[k]<<",";
    }
    return 0;
}