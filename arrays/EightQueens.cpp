#include<iostream>
using namespace std;
int q[9];
int count =0;
bool isAttack(int qi, int y, int x)
{
   /* 
    for(int i=1;i<=y-1; i++)
    {
        if(x==q[i] || y==i ||x-y ==q[i]-i || x+y==i+q[i])
            return true;
    }
    return false;
    */
    if (qi<=1)
    return false;
    int y1=qi-1;
    int x1=q[qi-1];
    if(x==x1 || y==y1 || x-y==x1-y1 || x+y==x1+y1)
    return true;

    return isAttack(qi-1,y,x);
    
            
}
void placeQueen(int qi)
{
    
    if(qi>8)
    {
        cout<<"Placed"<<endl;
        for(int i=1; i<=9-1; i++)
        {
            cout<<q[i]<<",";
        }
        cout<<endl;
        count++;
        return;
    }
    for(int i=1; i<=9-1; i++)
    {
       if( !(isAttack(qi, qi,i)))
       {
           q[qi]=i;
           placeQueen(qi+1);
       }
    }

}


int main()
{
    placeQueen(1);
    cout<<count<<endl;

    return 0;
}
