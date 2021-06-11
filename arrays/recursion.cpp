#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    return fib(n-1) + fib(n-2);
}
int factorial(int n)
{
    cout<<n<<endl;
    if (n<=0)
    return 1;
    else 
    return n * factorial(n-1);
}
int main(){
    int x=factorial(4);
    cout<<x<<endl;
    x=fib(6);
    cout<<x<<endl;
   return 0; 

}
/*
1. fib(1)=0
2. fib(2)=1
3. fib(n)=fib(n-1) + fib(n-2) if n>2

*/
// Fib, factorial, towersofhanoi, 8 queens, ,,,  regular expressions
/*
1. f0)=1
2. f(n) = n x f(n-1) if n>0
The fn must call itself directly or indirectly

There must be at last 1 non recursive option

The fn in general must move towards the non recursive option

*/