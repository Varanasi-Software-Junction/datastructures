#include<iostream>
using namespace std;



int main()
{
    int n=10;
    int a[]={2,4,3,7,1,5,6,8};
    int size= sizeof(a)/sizeof(int);

    for(int i = 0; i<=size-1; i++){
        for(int j=1+i; j<=size-1; j++)
        { 
            if(a[i]+a[j]==n)
            {
                cout<<a[i]<<" "<<a[j]<<endl;
                continue;
            }
           for(int k=j+1; k<=size-1; k++)
           {
               if(a[i]+a[j]+a[k]==n)
               {
                   cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
               }
           }
        }
    } 

    return 0;
}