#include <iostream>

using namespace std;

int main()
{
    int a[]={5,10,11,15,17,20,24,28};
    int size=sizeof(a)/sizeof(int);
    int search=15;
    int l=0,r=size-1;
    while(1)
    {
        int mid=(l+r)/2;
        cout<<l<<","<<mid<<","<<r<<endl;
        if(search==a[mid])
        {
            cout<<" found at "<<mid<<endl;
            return 0;
        }

        if(search>a[mid])
            l=mid+1;
        else
            r=mid-1;

        if(l>r)
        {
            cout<<l<<","<<mid<<","<<r<<endl;
            cout<< search << " not found"<<endl;
            return 0;
        }
    }

    return 0;
}
