#include<iostream>

using namespace std;
int a[3][3]={{0,0,0},{1,1,1},{2,2,2}};
const int N=3;
const int M=3;
void copy( int original[M][N],int copy[M][N])
{

    for(int i=0; i<=M-1; i++)
    {
        for(int j=0; j<=N-1; j++)
        {
            copy[i][j]=original[i][j];
        }
        
    }

}
int main()
{
    int n=3,m=3;

    int b[M][N];
    copy(a,b);


for(int i=0; i<=M-1; i++)
    {
        for(int j=0; j<=N-1; j++)
        {
            cout<<b[i][j]<<",";
        }
         cout<<endl;
    }
    return 0;
}