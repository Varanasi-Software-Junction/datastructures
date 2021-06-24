#include<iostream>
using namespace std;



    
    

int main()
{
    int n;
    int m;
    n=m=6;    
    int a[n][m]={     {0,0,0,0,0,0},
                      {0,-1,-1,0,-1,0},
                      {0,0,0,-1,0,-1},
                      {0,-1,-1,0,0,0},
                      {0,-1,-1,0,-1,0},
                      {0,0,0,0,-1,0}};
    int dir=1; //direction d =0 up  /d=1 right /d=2 down /d=3 left
    int count=0;
    int i=0,j=0;
    while(1)
    {
        if(i==n-1 && j==m-1)
        {
            cout<<"finished"<<endl;
            for(int i=0; i<=n-1; i++)
            {
                for(int j=0; j<=m-1; j++)
                {
                    cout<<a[i][j]<<",";
                }
                cout<<endl;
            }
            break;
        }
     //****************************Move Forward  

        if(dir==1)
        {
            if(j>=m-1)
            {
                dir=(dir+1)%4;
                continue;
            }
            if(a[i][j+1]==-1)
            {
                
                dir=(dir+1)%4;
                
            }
            else
            {
                j++;
                dir=(dir+3)%4;
                count++;
                a[i][j]=count;

            }
        }
        //****************************Move down  
        if(dir==2)
        {
            if(i>=n-1)
            {
                dir=(dir+1)%4;
                continue;
            }
            if(a[i+1][j]==-1)
            {
                
                dir=(dir+1)%4;
                
            }
            else
            {
                i++;
                dir=(dir+3)%4;
                count++;
                a[i][j]=count;

            }
        }
        //****************************Move back
        if(dir==3)
        {
            if(j<=0)
            {
                dir=(dir+1)%4;
                continue;
            }
            if(a[i][j-1]==-1)
            {
                
                dir=(dir+1)%4;
                
            }
            else
            {
                j--;
                dir=(dir+3)%4;
                count++;
                a[i][j]=count;

            }
        }
         //****************************Move up
        if(dir==0)
        {
            if(i<=0)
            {
                dir=(dir+1)%4;
                continue;
            }
            if(a[i-1][j]==-1)
            {
                
                dir=(dir+1)%4;
                
            }
            else
            {
                i--;
                dir=(dir+3)%4;
                count++;
                a[i][j]=count;

            }
        }




    }
    

    
    return 0;
}