#include<iostream>
using namespace std;
int isIn(int *a, int i,int val)
{
    for(int j=0; j<=i-1;j++)
    {
        if(a[j]==val) return 1;
    }
    return 0;
}
void permute(int *a,int i,int n)
{
    if(i>n-1)
    {
        for(int j=0; j<=n-1;j++)
        {
            cout<<a[j];
        }
        cout<<endl;
        //return;
    }

    for(int j=0; j<=n-1; j++)
    {
        if(isIn(a,i,j))
        {
            continue;
        }
        a[i]=j;
        permute(a,i+1,n);
    }


}
int main()
{

    int a[]={0,0,0};
    
    int n= sizeof(a)/sizeof(int);
   // char b[]={'A','B','C'};
    
    permute(a,0,n);
    return 0;
}