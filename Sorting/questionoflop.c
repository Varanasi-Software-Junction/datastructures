#include<stdio.h>
int main()
{ 
int n=56,r;
int base=16;
int rev=0,m=1,rem;
while(n>0)
{
     r=n%base;
    n=n/base ;
    rev = rev + r*m;
    m=m*10;
}
printf("%d",rev);


}