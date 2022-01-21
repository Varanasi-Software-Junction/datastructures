#include<iostream>
void valueswap(int a,int b);
void ptrswap(int* a,int* b);
void refswap(int& a,int& b);//Pass by reference
class Book
{
    public:Book(int a)
    {

    }
    };

int main()
{
Book b1(2);
Book *b2=new Book(7);
    int x=1,y=2;
   std::cout<<"X="<<x<<", Y="<<y<<"\n";
   valueswap(x,y);
   std::cout<<"X="<<x<<", Y="<<y<<"\n";
   refswap(x,y);
   std::cout<<"X="<<x<<", Y="<<y<<"\n";
   ptrswap(&x,&y);
   std::cout<<"X="<<x<<", Y="<<y<<"\n";
    return 0;
}
void valueswap(int a,int b)
{
    int t;
    std::cout<<"A="<<a<<", B="<<b<<"\n";
    t=a;
    a=b;
    b=t;
    std::cout<<"A="<<a<<", B="<<b<<"\n";
}
void refswap(int& a,int& b)
{
    int t;
    std::cout<<"A="<<a<<", B="<<b<<"\n";
    t=a;
    a=b;
    b=t;
    std::cout<<"A="<<a<<", B="<<b<<"\n";
}
void ptrswap(int *a,int *b)
{
    int t;
    std::cout<<"A="<<*a<<", B="<<*b<<"\n";
    t=*a;
    *a=*b;
    *b=t;
    std::cout<<"A="<<*a<<", B="<<*b<<"\n";
}