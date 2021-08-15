#include<iostream>
using namespace std;
int main()
{
    int m = 4;
    int n = 4;
    int a[m][n];
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            a[i][j]=0;
        }
    }
    
     for(int i=0; i<=m-1; i++) //showing array
    {
        for(int j=0; j<=n-1; j++)
        {
          cout<<a[i][j]<<",";
        }
        cout<<endl;
    }
    

    int count = 1;
    
    int dir=1;
    int j=0, i=0;
    a[i][j]=count;
     
  
   while(1)
    {
        cout<<"_____"<<endl;
        if(a[i+1][j]!=0 && a[i][j+1]!=0 && a[i-1][j]!=0 && a[i][j-1]!=0)
        {
                for(int i=0; i<=m-1; i++)
                {
                    for(int j=0; j<=n-1; j++)
                    {
                        cout<<a[i][j]<<",";
                    }
                    cout<<endl;
                }
                break;

        }
        if(dir==1)
        {   cout<<"a";
            if(j>=n-1 )//forward
            {
                cout<<"change for";

               dir=(dir+1)%4;
                continue;
            }
            if(a[i][j+1]==0)
            {  
                cout<<"forward->"; 
                count++;
                j++;
              a[i][j]=count;  
              continue;
            }
            dir=(dir+1)%4;
        }
        
        if(dir==2)//down
        {
            if(i>=m-1)
            {
                cout<<"change down";
                dir = (dir+1)%4;
                continue;
            }
            if(a[i+1][j]==0)
            {
                cout<<"down->";
                count++;
                i++;
                a[i][j]=count;
                continue;
            }
            dir=(dir+1)%4;

        }

        if(dir==3)//back
        {
            if(j<=0)
            {
                cout<<"change back";
                dir = (dir+1)%4;
                continue;
            }
            if(a[i][j-1]==0)
            {
                cout<<"back->";
                count++;
                j--;
                a[i][j]=count;
                continue;
            }
            dir = (dir+1)%4;
        }

        if( dir == 0)// up
        {
            if(i<=0)
            {
                cout<<"change up";
                dir= (dir+1)%4;
                continue;
            }
            if(a[i-1][j]==0)
            {
                cout<<"up->";
                i--;
                count++;
                a[i][j]=count;
                continue;
            }
         dir= (dir+1)%4;
        }

    }
    

    return 0;
}