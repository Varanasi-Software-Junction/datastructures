#include <iostream>

using namespace std;

int main()
{
    int a[10];
    int size=sizeof(a)/sizeof(int);
    int pos=0;
    while(1)
    {
        int option;
        cout<<"0-exit,1-Add,2-Change,3-Del,4-View"<<endl;
        cin>>option;
        switch(option)
        {
            case 0:return 0;
            case 1:
                {
                    if(pos>=size)
                    {
                        cout<<"Array full"<<endl;
                        break;

                    }
                    int value;
                    cout<<"Enter value";
                    cin>>value;
                    a[pos]=value;
                    pos++;
                    break;
                }
            case 4:
                {
                    int i;
                    cout<<endl;
                    for(i=0;i<=pos-1;i++)
                    {
                        cout<<a[i]<<",";
                    }
                    cout<<endl;
                }

        }

    }
    return 0;
}
