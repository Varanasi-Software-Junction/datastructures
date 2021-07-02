#include<iostream>
#include<string>
using namespace std;
int main()
{
    string b="abhi";
    int size=0;
    while(b[size]!='\0')
    {
        size++;
    }
    cout<<size<<endl;

   
    int count=0;
    string a="abhi abhi ram shyam abhishek.";
   int i=0;
    while(a[i]!='\0')
    {
        int j=0;
     while((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
        {
           
           
            if(a[i]!=b[j])
            {
                i++;
                break;
            }
            j++;
            i++;
            if(a[i]<='z' && a[i]>='a' && a[i]<='Z' && a[i]>='A')
            {
                cout<<"r"<<endl;
            continue;
            }
                cout<<"m"<<endl;
                 if(j==size)
                {
                    count++;
                    j=0;
                }
            
         }
    if(a[i]=='\0')
    {
        
        break;
    }
    cout<<endl;
    i++;
    }

    cout<<b<<" = "<<count<<endl; 


    return 0;
}