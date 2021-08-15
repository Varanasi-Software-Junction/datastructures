#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    
    int n=13;
    int x=5 ;
    int seq=x;
    while(n>0)
    {
        cout<<"abhi"<<endl;
        if(n%2 !=0)
        {       
            sum = sum+seq;
        }
        n=n/2;
        seq=seq+seq;

    }
    cout<<sum<<endl;
    return 0;
}