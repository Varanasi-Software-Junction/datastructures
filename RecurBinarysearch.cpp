#include<iostream>
using namespace std;
int binarysearch(int a[],int l,int r,int val)
{
    if(l>r)
    return -1;
    
        int mid=(r+l)/2;
        if(val==a[mid])
            return mid;
        
         if(val>a[mid])
        return binarysearch(a,mid+1,r,val);
        
       return  binarysearch(a,l,mid-1,val);
       
    
        
    
}
int main(){
    int a[]={1,2,3,4,5,8,9,10,11};
    int size=sizeof(a)/sizeof(int);
    int b= binarysearch(a,0,size-1,1);
    cout<<b<<endl;
    

    return 0;
}