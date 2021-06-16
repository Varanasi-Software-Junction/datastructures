#include<iostream>
using namespace std;
class Stack{
    private:
        int top;
        int size;
        char* a;
    public:
        Stack()
        {
            top = -1;
            size=10;
            a=new char[size];
            
        }
        void push(char val)
        {
            if (isFull())
            {

                return;
            }
            top++;
            a[top]= val;
        }
        char pop()
        {
            if(isEmpty())
            {

                return -1;
            }
            top--;
            return a[top+1];
            

        }
        char peek()
        {
            if(isEmpty())
            {

                return 'x';
            }
            return a[top];
            
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
int precedence(char a)
{
    if(a=='/')
        return 3;
    if(a=='*')
        return 2;
    if(a=='+')
        return 1;
    if(a=='-')
        return 0;
    
    return -1;

}
bool isOperand(char ch)
{
if (ch>='0' && ch<='9')
    return true;

return false;
}


int main()
{
    Stack s;
    char a[]={'2','*','3','*','4','+','5','/','2','/','2'};
    int size= sizeof(a)/sizeof(char);
    for(int i=0; i<=size-1; i++){
        if(isOperand(a[i]))
        {
            cout<<a[i]<<",";
            if(i==size-1)
            {
                while(!s.isEmpty())
                cout<<s.pop()<<",";
            }
            continue;
        }
        if(s.isEmpty())
        {
            s.push(a[i]);
            continue;
        }
        //if(precedence(s.peek()) > precedence(a[i]))
        //{
            //cout<<precedence(s.peek())<<endl;
            while(precedence(s.peek()) > precedence(a[i]))
            {

                cout<<s.pop()<<",";
            } 
            s.push(a[i]);
                continue;
        //}
        
       /* if(precedence(s.peek()) <= precedence(a[i]))
        {
            s.push(a[i]);
            continue;
        } */

    }

    //cout<<precedence(a[5])<<endl;


    return 0;
}