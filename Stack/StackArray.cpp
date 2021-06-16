#include<iostream>
using namespace std;
class Stack{
    private:
        int top;
        int size;
        int* a;
    public:
        Stack()
        {
            top = -1;
            size=10;
            a=new int[size];
            
        }
        void push(int val)
        {
            if (isFull())
            {

                return;
            }
            top++;
            a[top]= val;
        }
        int pop()
        {
            if(isEmpty())
            {

                return -1;
            }
            top--;
            return a[top+1];
            

        }
        void peek()
        {
            if(isEmpty())
            {

                return;
            }
            cout<<a[top]<<endl;
        }
        bool isFull()
        {
            if(top>=size-1)
            {
                return true;
            }
            return false;
        }
        bool isEmpty()
        {
            if(top<=-1)
            {
                return true;
            }
            return false;
        }


} ;

int main()
{
    Stack s;
    s.push(4);
  //  s.peek();
    s.push(3);
    //s.peek();
    s.push(10);
   // s.peek();
   while(!s.isEmpty())
   {
       cout<<s.pop()<<","<<endl;
   }


    

    return 0;
}