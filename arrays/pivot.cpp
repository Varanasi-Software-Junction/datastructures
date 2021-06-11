#include <iostream>
using namespace std;
int main()
{
    int a[] ={5,22,2,17,-5};
    int size = sizeof(a)/sizeof(int);
    int pivot=a[0];
    int i=1,lastsmall=0;
int t;
for (i=1;i<=size-1;i++)
{
    if(a[i]>=pivot)
    continue;
    lastsmall++;
    t=a[i];
    a[i]=a[lastsmall];
    a[lastsmall]=t;
}
t=a[0];
a[0]=a[lastsmall];
a[lastsmall]=t;
for (i=0;i<=size-1;i++)
cout<<a[i]<<",";
    return 0;
}