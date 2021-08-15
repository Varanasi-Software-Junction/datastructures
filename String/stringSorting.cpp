#include<iostream>
#include<string>

using namespace std;
int comp(string a, string b,int i) //if a<b return 1 b=a return 0 a>b return 2
{
    if(a[i]=='\0' && b[i]=='\0')
    {
        return 0;
    }
    if(a[i]=='\0')
    {
        return 1;
    }
    if(b[i]=='\0')
    {
        return 2;
    }
    if(b[i]>a[i])
    {
        return 1;
    }
    if(b[i]==a[i])
    {
        return comp(a,b,i+1);
    }
    return 2;

}
int main()
{
    string a[]={"abhishek","sanjeev","ravikant","shivank","puneet","nitesh","aryant","harish","bhairav"};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<size<<endl;
    for(int i=0; i<=size-1;i++)
    {
        cout<<a[i]<<", ";
    }
    cout<<endl;
    for(int i=1; i<=size-1; i++)
    {
        string temp = a[i];
        int j=i-1;
        while(j>=0)
        {
            int c = comp(temp,a[j],0);
            if(c==0 || c==2)
            {
                break;
            }
            string t;
            a[j+1]=a[j];
            j--;
 
        }
        a[j+1]=temp;

    }
    for(int i=0; i<=size-1;i++)
    {
        cout<<a[i]<<", ";
    }
    cout<<endl;
    
    
    return 0;
}