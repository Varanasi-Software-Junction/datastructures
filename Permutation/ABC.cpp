#include<iostream>
using namespace std;
int isIn(char *a, int i,char val)
{
    for(int j=0; j<=i-1;j++)
    {
        if(a[j]==val) return 1;
    }
    return 0;
}
void permute(char *a,char *b, int i,int n)
{
    if(i>n-1)
    {
        for(int j=0; j<=n-1;j++)
        {
            cout<<a[j];
        }
        cout<<endl;
        return;
    }

    for(int j=0; j<=n-1; j++)
    {
        if(isIn(a,i,b[j]))
        {
            continue;
        }
        a[i]=b[j];
        permute(a,b,i+1,n);
    }


}
int main()
{

    char a[]={0,0,0};
    char b[]={'A','B','C'};
    int n= sizeof(a)/sizeof(char);
   // char b[]={'A','B','C'};
    
    permute(a,b,0,n);
    return 0;
}