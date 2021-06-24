#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0 ; i<=n-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            if(i+j>=n-1)
            {
                cout<<"1 ";
                continue;
            }
            cout<<"0 ";
        }
        cout<<endl;
    }

    return 0;
}