#include <iostream>

using namespace std;

int main()
{
    int a[]={9,8,7,6,5,4,3,2,1,0};
    int n=sizeof(a)/sizeof(int);
    int pos=0;
    int t;
    for(int i=1;i<=n-1;i++)
    if(a[i]<a[pos])
        pos=i;
    t=a[0];
    a[0]=a[pos];
    a[pos]=t;
//Selection sort one loop ensures 0th element is smallest

for(int i=0;i<=n-2;i++)
{
    if(a[i]<=a[i+1])
        continue;
    t=a[i+1];
    int j=i+1;
    while(  a[j-1]>t)
    {
        a[j]=a[j-1];
        j--;
    }
    a[j]=t;
//5,22,3,4,56,-6,4
//


}

    for(int i=0;i<=n-1;i++)
    cout << a[i] <<",";
    cout<< endl;
    return 0;
}
