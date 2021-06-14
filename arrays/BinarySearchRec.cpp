#include<iostream>
using namespace std;

int BinSearch(int a[],int l, int r,int key)
{
    if(l>r)
        return -1;
    
    int mid= (l+r)/2;
    if(key==a[mid])
        return mid;

    if(key>a[mid])
        return BinSearch(a,mid+1,r,key);

return BinSearch(a,l,mid-1,key);
}

int main()
{
    int a[]={2,4,6,7,8,9,11,13,17,18,20};
    int size= sizeof(a)/sizeof(int);
    int key =4;
    int s= BinSearch(a,0,size-1,key);
     if(s==-1)
    {
        cout<<"NOT FOUND"<<endl;
    }
    else{
        cout<<key<<" is found at index "<<s<<endl;
    }


    return 0;
}