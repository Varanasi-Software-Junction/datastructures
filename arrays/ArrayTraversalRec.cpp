#include<iostream>
using namespace std;
void H(int a[],int i,int size)
{ 

    if(i>size-1) 
    {
        cout<<endl;
        return;
    }
    cout<<a[i]<<",";
    
    H(a,i+1,size);
    
}
void S(int a[],int k,int size)
{ 
    if(k<0) 
    {
        cout<<endl;
        return;
    }
    cout<<a[k]<<",";
    k--;
    S(a,k,size);
}


int main()
{
    int a[]={2,7,3,6,4,5,8,9};
    int size=sizeof(a)/sizeof(int);
    int i=0;
    H(a,i,size);
    int k=size-1;
    S(a,k,size);

    return 0;
}