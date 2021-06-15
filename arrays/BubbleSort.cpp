#include<iostream>
using namespace std;
int main()
{
    int a[]={7,6,5,4,3,2,1};
    int size= sizeof(a)/sizeof(int);

    for(int i=0; i<=size-1; i++) //printin above array
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int temp;

    for(int i=0; i<=size-2; i++) 
    {
        for(int j=0; j<=size-2-i; j++)
        {
            if(a[j]<=a[j+1])
            continue;
            
                temp=a[j];      //swapping a[j] and a[j+1]
                a[j] = a[j+1];
                a[j+1] =temp;
            
        }
          for(int l=0; l<=size-1; l++) //printing  array at every step
          {
            cout<<a[l]<<" ";
            }   
            cout<<endl;
        
    }

   


    return 0;
}