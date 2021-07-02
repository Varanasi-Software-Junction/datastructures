#include<iostream>
using namespace std;
int main()
{
    int n=2;
    int x=3;        //x^n1
    int product=1;
    int seq= x;
    while(n>0)
    {
        cout<<"while"<<endl;
        if(n%2 != 0)
        {
            product= product*seq;
        }
        n=n/2;
        seq=seq*seq;

    }
    cout<<product<<endl;
    return 0;
}