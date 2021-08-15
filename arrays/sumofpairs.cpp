#include<iostream>
using namespace std; 
int main()
{
    int n=8;
    int a[]={2,6,3,8,4,5,1};
    int size= sizeof(a)/sizeof(int);
    int t;
    for(int i=0; i<=size-1; i++)
    {
        for(int j=0; j<=size-1-i ; j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;

            }
        }
    }
    for(int i=0; i<=size-1; i++)
    {
        cout<<a[i]<<",";
    }
    cout<<endl;

    for(int i=0; i<=size-1; i++)
    {
        int j=i+1;
        while(a[i]+a[j]<=8)
        {
            if(a[i]+a[j]==8)
            {
                cout<<"("<<a[i]<<","<<a[j]<<")"<<",";
            }
            j++;
        }
    }

    return 0;
}