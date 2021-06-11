#include <iostream>
using namespace std;
int main()
{
    int a[]={7,6,5,4,2,3,1,0,-1};
    int size= sizeof(a)/sizeof(int);
// one loop of selection sort
    int min, minpos=0;
    min=a[0];
    for(int i=1; i<=size-1; i++)
    {
        if(a[i]>=min)
            continue;
        
        min= a[i];
        minpos= i;

    }
    a[minpos]=a[0];
    a[0]= min;
    //one loop of selection sort ended here

    // insertion sort started here
    for(int i=0; i<=size-2; i++)
    {
        if(a[i]<=a[i+1]) continue;

       int t=a[i+1];
       int j=i+1;
       while(t<a[j-1])
       {
           a[j]=a[j-1];
           j--; 
       }
       a[j]=t;

    }

     for(int l=0;l<=size-1;l++) //printing sorted array
         {
            cout<<a[l]<<" ";
         }
        cout<<endl;
    return 0;
}
