#include<iostream>
using namespace std;
void convert(int n)
{
    if (n<=0)
    return;
    int rem=n % 10;
    
    convert(n/10);
    switch (rem)
    {
    case 0:
    cout<<" Zero ";
        break;
    case 1:
    cout<<" One ";
        break;
    case 2:
    cout<<" Two ";
        break;
    case 3:
    cout<<" Three ";
        break;
    
    default:
        break;
    }
    
}
int main()
{
 convert(123);
    return 0;
}