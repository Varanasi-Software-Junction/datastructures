#include<iostream>
using namespace std;

int main()
{   int ra=3, ca=3;
    int rb=3, cb=3;
    int rx=3, cx=3;
    int rm=ra, cm=cb;
    
    int a[ra][ca]={{1,2,3},{4,5,6},{7,8,9}};
    int b[rb][cb]={{2,0,1},{2,0,1},{2,0,1}};
    int x[rx][cx]={0};
    int m[rm][cm]={{0,0,0},{0,0,0},{0,0,0}};
    cout<<"ADDITION:"<<endl;
    for(int r=0; r<=ra-1; r++)
    {
        for(int c=0; c<=ca-1; c++)
        {
            x[r][c]=a[r][c]+b[r][c];
            cout<<x[r][c]<<" ";
        }
        cout<<endl;
    }

    cout<<"MULTIPlICATION:"<<endl;
    
    for(int r=0; r<=rm-1; r++)
    {
         for(int i=0; i<=ca-1; i++)
        {
            for(int c=0; c<=cm-1; c++)
            {
                m[r][c]=m[r][c]+a[r][i]*b[i][c];
               // cout<<m[r][c]<<" ";
                
            }
          //  cout<<endl;
        }
    }
    
    for(int r=0; r<=rm-1; r++)
    {
        for(int c=0; c<=cm-1; c++)
        {
           
            cout<<m[r][c]<<" ";
            
        }
        cout<<endl;
    }
cout<<"Diagonal Elements and ADDITION OF DIAGONAL ELEMENTS OF A"<<endl;
int sum=0;
int sumprime=0;
for(int i=0; i<=ra-1; i++)
{
    for(int j=0; j<=ca-1; j++)
    {
        if(j==i || j+i==ra-1)
        {
            
        cout<<a[i][j]<<",";
        sum = sum+a[i][j];
        int f=0;
        int m= a[i][j]/2;
        for(int k=2; k<=m; k++)
        {
            if( a[i][j]%k==0 )
            {
                f=1;
                break;
            }
        }
        if(f==0 && a[i][j]!=1)
        {
            sumprime=sumprime+a[i][j];
           // cout<<a[i][j];
        }
        
        } 
    }
}
cout<<"\n sum of diagonal elements is "<<sum<<endl;
cout<<"\n sum of diagonal elements which are prime is "<<sumprime<<endl;



    return 0;
}


