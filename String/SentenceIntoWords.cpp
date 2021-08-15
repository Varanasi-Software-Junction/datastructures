#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a="Hi I am Programmer.";
    cout<<a<<endl;  
    int i=0;
    while(1)
    {
     while((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
        {
            cout<<a[i];
            i++;
         }
    if(a[i]=='.')
    {
        
        break;
    }
    cout<<endl;
    i++;
    }

    return 0;
}