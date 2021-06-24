#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int n,m;
    n=m=6;
    int a[n+2][m+2]={{-1,-1,-1,-1,-1,-1,-1,-1},
                     {-1,0,0,-1,-1,-1,0,-1},
                     {-1,0,-1,0,0,0,0,-1},
                     {-1,0,-1,0,0/*f*/,0,0,-1},
                     {-1,0,-1,0,0,0,0,-1},
                     {-1,0,0,0,-1,0,0,-1},
                     {-1,0,-1,0,0,-1,0,-1},
                     {-1,-1,-1,-1,-1,-1,-1,-1}};
    
    int i=1,j=1;
   // int pdir=-1;// previous direciton;
  //  int dir=1;
    int mark = 1;
    stack<int> x;
    stack <int>y;
    
    y.push(i);
    x.push(j);
    a[i][j]=mark;
     while(1)
    {
        if(i==3 && j==4)
        {
            cout<<"finished"<<endl;
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=m; j++)
                {
                    cout<<a[i][j]<<",";
                }
                cout<<endl;
            }
            break;
        }
        //****************************Move Forward  

        if(  a[i][j+1]==0 )
        {
            
            
            j=j+1;
           
            y.push(i);
            x.push(j);
            a[i][j]=mark;
            cout<<"forward";
             cout<<i<<j<<" "<<a[i][j]<<endl;
            int z;
            cin>>z;
            continue;
        }
        //****************************Move down  
         if(  a[i+1][j]==0)
        {
            
            i++;
            y.push(i);
            x.push(j);
            a[i][j]=mark;
            cout<<"Down"<<i<<j<<" "<<a[i][j]<<endl;
            int z;
            cin>>z;
            continue;
            
        }
     
        
        //****************************Move back
         if(  a[i][j-1]==0 )
        {
           
            j--;
            y.push(i);
            x.push(j);
            a[i][j]=mark;
            cout<<"Back"<<i<<j<<" "<<a[i][j]<<endl;
            int z;
            cin>>z;
            continue;
            
        }
         //****************************Move up
        if(  a[i-1][j]==0 )
        {
            
            i--;
            y.push(i);
            x.push(j);
            a[i][j]=mark;
            cout<<"Up"<<i<<j<<" "<<a[i][j]<<endl;
            int z;
            cin>>z;
            continue;
        }
        else{
                 if(x.empty()){
                    cout<<"NOT Possible to reach destination"<<endl;
                    break;
                }
                y.pop();
                x.pop();
                cout<<"pop"<<i<<j<<" "<<a[i][j]<<endl;
                i=y.top();
                j=x.top();
        
        int z;
        cin>>z;

        }
    }
    
                   

    return 0;
}
