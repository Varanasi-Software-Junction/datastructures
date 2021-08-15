#include <iostream>

using namespace std;

int main()
{
 int a=1,b=2,c=3;
 if (a==0 && b==0)
 {
     cout<<"No Equation";
     return 0;

 }
 if(a==0)
 {
     cout<<"X = "<<-c/b;
     return 0;

 }
 double d=b*b - 4*a*c;
 if(d>=0)
 {
     d=sqrt(d);
double x1=(-b + d)/(2*a);
double x2=(-b - d)/(2*a);
 }
 else{
    d=sqrt(-d);
    double rp=-b/(2*a);
    double ip=d/(2*a);
 }
    return 0;
}
