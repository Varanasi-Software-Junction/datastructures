//This program illustrates the use of function pointers in C and C++.
#include<stdio.h>
#include<conio.h>
void f1(int x);
void f2(int y);
void f3(void (*f)(int p),int n);
void main()
{
void (*f4)(void);
void (*f)(int p);
f4=&clrscr;
f4();
f=&f1;
f1(3);
(*f)(3);
f=&f2;
f2(3);
(*f)(3);
f3(&f1,4);
f3(&f2,4);
getch();
}
void f3(void (*f)(int p),int n)
{
(*f)(n);
}
void f1(int x)
{
printf("\n%d",2*x);
}
void f2(int y)
{
printf("\n%d",3*y);
}
