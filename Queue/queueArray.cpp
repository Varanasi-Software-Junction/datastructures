#include<iostream>
using namespace std;
class queue{
    private:
        int front;
        int back;
        int n;
        int size;
        int* a;
    public:
        queue()
        {
            n=0;
             front=-1;
             back=-1;
            size=10;
            a= new int[size];
        }
        void push(int val)
        {
            if(isFull())
            {
                cout<<"Error Array is full"<<endl;
                return;
            }
            if(isEmpty())
            {
                cout<<" First"<<endl;
             front++;
            }
            

            back++;
            back= back%size;
            n++;
            a[back]=val;
            cout<<back<<"suc"<<endl;

        }
        int pop()
        {
            if(isEmpty())
            {
                
                return-1;
            }
            n--;
            int temp=a[front];
            front++;
            front=front%size;
            return temp;
        }
        int isEmpty()
        {
            if(n==0)
            {
                return 1;
            }
            return 0;
        }
        int isFull()
        {
            if(n==size)
            {
                return 1;
            }
            return 0;
        }
    void peek()
        {
            cout<<a[front]<<endl;
        }
    void show()
    {
        for(int i=0;i<=size-1; i++)
        {
        cout<<a[i]<<",";
        }
        cout<<endl;
    }
};
int main()
{
    queue q;
    //cout<<q.isFull()<<endl;
    q.push(1);
  
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);
    q.push(0);
  // q.peek();
  q.show();
    while(!q.isEmpty())
    {
        cout<<q.pop()<<endl;
    }
    


    return 0;
}