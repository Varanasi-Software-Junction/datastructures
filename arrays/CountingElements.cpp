#include<iostream>
using namespace std;
int main()
{
    int a[] ={1,0,1,1,2,3 };
    int a1[10]={0};
    int size= sizeof(a)/sizeof(int);
    
    for(int i=0;i<size;i++){
      a1[a[i]]++;
    }
    for(int i=0;i<10;i++)
    {
        cout<<a1[i]<<" ";
    }
    return 0;
}