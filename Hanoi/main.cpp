#include <iostream>
using namespace std;
void hanoi(int n,int start, int middle, int last)
{
   static  int stepno=0;
   //  cout<< &stepno<<endl;
    if(n<=0)
        return;
    if(n==1)
    {
        cout << ++stepno << ":" <<"Move "<< start <<" to "<< last <<endl;
        return;
    }
    hanoi(n-1,start,last,middle);
    cout << ++stepno << ":" <<"Move "<< start <<" to "<< last <<endl;
    hanoi(n-1,middle,start,last);

}


int main()
{
    hanoi(4,1,2,3);
    return 0;
}
