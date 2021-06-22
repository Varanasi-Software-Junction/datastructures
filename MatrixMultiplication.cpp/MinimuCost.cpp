#include<iostream>
using namespace std;
int main()
{
    int r1,r2,r3,r4,r5,r6;
    int c1,c2,c3,c4,c5,c6;
    r1=30;
    c1=r2=35;
    c2=r3=15;
    c3=r4=5;
    c4=r5=10;
    c5=r6=20;
    c6=25; 
   
    int size[]={30,35,15,5,10,20,25};//array sizes
     int n =sizeof(size)/sizeof(int)-1; //numbers of array
    int a[n][n];
    for(int i=0; i<=n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {a[i][j]=0;}
    }
    
    for(int i=0; i+2<=n+1; i++)
    {
        
        a[1][i]=size[i]*size[i+1]*size[i+2];
    }
    for(int i=2; i<=n-1;i++)
    {
        for(int j=0;j<=n-1-i;j++)
        {
            for(int k=i;k<=j-1)
            a[i][j]=a[i-1][j]+size[j]*size[j+i]*size[j+i+1];
            cout<<i<<j<<"= a"<<i-1<<j<<"+ s"<<j<<"* s"<<j+i<<"* s"<<j+i+1<<endl;
            int x=a[i-1][j+1]+size[j]*size[j+1]*size[j+i+1];
             cout<<"= a"<<i-1<<j+1<<"+ s"<<j<<"* s"<<j+1<<"* s"<<j+i+1<<endl;
            if(a[i][j] >x)
            {
                a[i][j]=x;
            }
            //cout<<a[i][j]<<",";
        }
        cout<<endl;
    }
    
    
   
    for(int i=0; i<=n-1;i++)
    {
        for(int j=0;j<=n-1-i;j++)
        {
            
            cout<<a[i][j]<<",";
        }
        cout<<endl;
    }
    


    
    return 0;
}