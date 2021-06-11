#include<iostream>
using namespace std;
int main(){
    int a[]={7,6,5,4,3,2,1};
    int size=sizeof(a)/sizeof(int);
    for(int i=0; i<=size-1;i++) //printing above array
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int max,maxpos;

    for(int i=size-1;i>=1;i--)
    {
        max=a[i];
        maxpos=i;
        for(int j=i-1; j>=0; j--)
        {
            if(max<a[j])
            {
                max=a[j];
                maxpos=j;
            }
        }
        for(int l=0; l<=size-1;l++) //printing  array at every step of 
    {
        cout<<a[l]<<" ";
    }
    cout<<endl;
       
        a[maxpos]=a[i];//swapping

        a[i]=max;  //swapping

    }


     for(int i=0; i<=size-1;i++) //printing sorted  array
    {
        cout<<a[i]<<" ";
    }


    return 0;
}