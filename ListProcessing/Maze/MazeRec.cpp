//all possible paths 

#include<iostream>
using namespace std;
const int n=6,m=6;


void copy( int original[n+2][m+2],int copy[n+2][m+2])
{

    for(int i=0; i<=n+1; i++)
    {
        for(int j=0; j<=m+1; j++)
        {
            copy[i][j]=original[i][j];
        }
        
    }

}
int isFree(int a[n+2][m+2],int i,int j)
{
    if(a[i][j]==0)
    {
        return 1;
    }
    return 0;
}
/*int isBlock(int i,int j)
{
    if(!(isFree(i+1,j) || isFree(i,j+1) || isFree(i-1,j) || isFree(i,j-1)))
    {
        return 1;
    }

return 0;
}*/
void move(int a[n+2][m+2],int i,int j,int fi,int fj)
{ 
    int mark =1;
    a[i][j]=mark;
    int b[n+2][m+2];
    copy(a,b);
    
    
    if(i==fi && j==fj)
    {
        cout<<"finished"<<endl;
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=m; j++)
                {
                    cout<<b[i][j]<<",";
                }
                cout<<endl;
            }
           
    }
    
        if(isFree(a,i,j+1))//forward
        {
            cout<<"forward"<<endl;
            move(b,i,j+1,fi,fj);
        }
        if(isFree(a,i+1,j))//down
        {
            cout<<"down"<<endl;
            move(b,i+1,j,fi,fj);
        }
        if(isFree(a,i,j-1))//back
        {
            cout<<"back"<<endl;
            move(b,i,j-1,fi,fj);
        }
        if(isFree(a,i-1,j))//up
        {
            cout<<"up"<<endl;
            move(b,i-1,j,fi,fj);
        }
}

int main()
{
    int a[8][8]={{-1,-1,-1,-1,-1,-1,-1,-1},//a[n+2][m+2]
                 {-1,0,0,-1,-1,-1,0,-1},
                 {-1,0,0,0,0,0,0,-1},
                 {-1,0,-1,0,0/*f*/,0,0,-1},
                 {-1,0,-1,0,0,0,0,-1},
                 {-1,0,0,0,-1,0,0,-1},
                 {-1,0,-1,0,0,-1,0,-1},
                 {-1,-1,-1,-1,-1,-1,-1,-1}};
    
    move(a,1,1,3,4);
    return 0;
}