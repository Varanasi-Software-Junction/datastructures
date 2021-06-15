#include<iostream>
using namespace std;
int LinSearch(int a[], int r, int key)
{
    if(r<0) 
        return -1;
    if(key==a[r])
        return r;

return LinSearch(a,r-1,key);
}
int main()

{
    int a[] ={0,3,2,6,7,4,1,8,9};
    int size= sizeof(a)/sizeof(int);
    int key=10;
    int s=LinSearch(a,size-1,key);
    if(s==-1)
    {
        cout<<"NOT FOUND"<<endl;
    }
    else{
        cout<<key<<" is found at index "<<s<<endl;
    }

    return 0;
}