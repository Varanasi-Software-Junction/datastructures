#include<iostream>
using namespace std;
int main()
{
    float n=36;
    float x=2; 
    float y;
    
    
    while(1)
    {
        y=n/x;
        if(x==y )
        {
            cout<<x<<endl;
            break;
        }
        x=(x+y)/2;
    }
    return 0;
}