#include<iostream>
using namespace std;
int main()
{
    int a[]={2,6,4,7,8,5,9,1};
    int size= sizeof(a)/sizeof(int);
    for(int i=0; i<=size-2;i++)
    {
        for(int j=0; j<=size-2-i ;j++)
        {
            if(a[j]>a[j+1])
            {
            int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            }
        }
    }
    for(int i=0; i<=size-1; i++)
    {
        cout<<a[i]<<",";
    }

    for(int i=0; i<=size-2; i+=2)
    {
        int t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;

    }
    cout<<endl;
    for(int i=0; i<=size-1; i++)
    {
        cout<<a[i]<<",";
    }



    return 0;
}