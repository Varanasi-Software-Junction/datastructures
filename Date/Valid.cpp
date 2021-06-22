#include<iostream>
using namespace std;
int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int lmonth[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int isLeap(int y)
{
    if(y%400==0)//if divisible by 400 then it is leap year
        {
            return 1;
        }
    if(y%4==0 && y%100!=0)//if divisible by 4 but not divisible by 100 the it is leap year;
    {
        return 1;
    }
    return 0;

}
int main()
{
    char a;
    int d,m,y;
    int leap=0;
    //cin>>d>>a>>m>>a>>y;
    d=29;
    m=2;
    y=2000;
    if(y>0)
    {
        //cout<<isLeap(y)<<endl;
    if(m>=1 && m<=12)
    {
        if(isLeap(y))
        {
            if(d>=1 && d<=lmonth[m])
            {
                cout<<"Valid"<<endl;
                return 0;
            }

        }
        if(d>=1 && d<=month[m])
        {
            cout<<"Valid"<<endl;
            return 0;
        }
    }
    }
    
    cout<<"Invalid Date"<<endl;


    return 0;
}