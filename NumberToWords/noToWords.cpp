#include<iostream>
#include <math.h>
#include<string>
using namespace std;
string a[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen","twenty"};
string tens[]={" ","ten","twenty","thrity","forty","fifty","sixty","seventy","eighty","ninty"};
void unit(int n)
{
    int x=n%10;
    cout<<a[x]<<endl;
}
void ten(int n)
{
    int x=n%100;
    if(x>=11 && x<=19)
    {
        cout<<a[x]<<" ";
        return;
    }
    x=x/10;
    cout<<tens[x]<<" ";
    
}
void hundred(int n)
{
    int x=n%1000;
    x= x/100;

    cout<<a[x]<<" hundred ";
}
void thousand(int n)
{
    int x=n/1000;
    cout<<a[x]<<" thousand ";
}
int main()
{
    int n=1999;
    int count=0;
    int temp=n;
   /* while(temp!=0)
    {
        count++;
        temp=temp/10;
    }
    temp=n;
    
    cout<<count<<endl; */
    
    thousand(n);
    hundred(n);
    ten(n);
    unit(n);

    return 0;
}