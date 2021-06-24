#include<iostream>
using namespace std; 
int main()
{
    int n=4;
    int a[n]={0};
    //cout<<a[2]<<a[1]<<a[0]<<endl;
    while(true)
    {
        int count=0;
        for(int i=n-1; i>=0; i--)
        {
           if(a[i]==1) count++;
           cout<<a[i];
        }
        cout<<endl;
       
        if(count==n)
        {
            break;
        }
       // cout<<"while"<<endl;
        
       /* for(int i=n-1; i>=0; i--)
        {
            cout<<a[i];
        }
        cout<<endl;*/
        for(int i=0; i<=n-1; i++)
        {
          //  cout<<"for";
         if(a[i]==0)
        {
           // cout<<"br"<<endl;
            
            a[i]=1;
            break;
        }
        a[i]=0;
        }
       

    }
    //cout<<a[2]<<a[1]<<a[0]<<endl;

    return 0;
}