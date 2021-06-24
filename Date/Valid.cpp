
#include<iostream>
#include<string>
using namespace std;

int daysInMonth[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
string day[]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
//int lmonth[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
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
int getDaysInMonth(int m,int y)
{
    if(isLeap(y) && m==2 )
            {
              //  cout<<"Valid"<<endl;
                return 29;
            }
    if(m>=1 && m<=12)
    {
        return daysInMonth[m];
    }
    return 0;
    
}
int isValid(int d,int m,int y)
{
    if(y<1)
    {
        return 0;
    }
        //cout<<isLeap(y)<<endl;
    if(m<1 || m>12)
    {
        return 0;
    }
    if(d<1 ||   d>getDaysInMonth(m,y))
    {
        return 0;
    }
    
        
    return 1;
 }
    
   
int cmpDate(int d1, int m1, int y1, int d2, int m2, int y2)
{
    if(y2>y1)
        return 1;
    
    if(y2<y1)
        return -1;
    if(m2>m1)
        return 1;
    if(m2<m1)
        return -1;
    if(d2>d1)
        return 1;
    if(d2<d1)
        return -1;
    
    return 0;
}

int dateDiff(int d1, int m1, int y1, int d2, int m2, int y2)
{  
    int sign=1;
    int t;
    int cmp= cmpDate(d1,m1,y1,d2,m2,y2);
    if(cmp == 0)
        return 0;
    if(cmp<0)
    {
        sign=-1;
        t=d1;
        d1=d2;
        d2=t;

        t=m1;
        m1=m2;
        m2=t;

        t=y1;
        y1=y2;
        y2=t;


    }
     //D2=22-6-2021  D1=18-10-2001
    //D2>D1
    int diff1=d1-1;
    // D1=1-10-2001 
    int diff2=d2-1;
    // D2=1-6-2021
    int diff3=0;
    for(int i=2; i<=m1; i++)
    {
        diff3 +=getDaysInMonth(i,y1);
    }
    //D1=1-1-2001
    int diff4=0;
    for(int i=2; i<=m2; i++)
    {
        diff4 +=getDaysInMonth(i,y2);
    }
    //D2= 1-1-2021
    int diff5=0;
    for(int i=y1;i<=y2-1;i++)
    {
        if(isLeap(i))
        {
            diff5 += 366;
            continue;
        }
        diff5 += 365;
    }
    return sign*(diff2 + diff4 + diff5 - diff1 - diff3);

}

string getDay(int d1, int m1,int y1)
{
    int d=29, m=6, y=2021; //Tuesday
    int n=dateDiff(d,m,y,d1,m1,y1);
    if(n<0)
    {
        n=-n;
    }
    cout<<n%7<<endl;
    return day[(n%7)+2];

}


int main()
{
   // char a;
    
    int d1,m1,y1;

    int d2,m2,y2;
    int leap=0;
    //cin>>d>>a>>m>>a>>y;

    d1=19;
    m1=6;
    y1=2021;
    d2=20;
    m2=6;
    y2=2021;
   
    if(isValid(d1,m1,y1))
    {
        cout<<"Valid"<<endl;
    }
    else{
    
    cout<<"Invalid Date"<<endl;
    }
    cout<<dateDiff(d1,m1,y1,d2,m2,y2)<<endl;
    cout<<getDay(29,6,2020)<<endl;
   


   
    
    return 0;
}