#include<iostream>
using namespace std;
int i;
void initialize()
{
   i=1;
   cout<<"init"<<endl;
}
void incr()
{
   i++;
   cout<<"incr"<<endl;
}
void condition()
{
   cout<<"condition"<<endl;
 //  return i<=10;
}
int main(){
for(initialize();condition();incr())
cout<<"body"<<endl;
   return 0;

}