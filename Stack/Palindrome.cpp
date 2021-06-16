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
    int b[]={1,2,3,3,2,1};
    int size= sizeof(b)/sizeof(int);
    Stack s;
    int count=0;
    for(int i=0; i<=size-1; i++)
    {
      //  cout<<b[i]<<",";
        s.push(b[i]);
    }
    for(int i=0; i<=size-1; i++)
    {
        int x=s.pop();
      //  cout<<x<<",";
        if(x==b[i])
        {
            count++;
            
        }

    }
    //cout<<count<<" "<<size<<endl;
    if(count== size)
    {
        cout<<"The number is Palindrome"<<endl;
    }
    else{
        cout<<"NOT a Palindrome"<<endl;
    }

    return 0;
}