#include <iostream>
using namespace std;
int main()
{
    int a[] ={5,22,4,3,6 ,1,-5,33};
    int size=sizeof(a)/sizeof(int);
      
    
    int count =0;
    for(int i=1; i<=size-1;i++)
    {
        if(a[0]>a[i]) count++;

    }
    //cout<<count<<endl;
    int p=a[0];  //swapping
    a[0]=a[count];
    a[count]=p;
   // int j =size-1;
    /*for(int i=0; i<=count-1; i++)
    {
        if(a[i]>a[count])
        {
            for(;j>=count+1; j--)
            {
                if(a[j]<a[count])
                {
                    int t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
    }*/
     
    int i=0;
    int j=size-1;
    while(j>i)
    {
        if(a[i]<=a[count]) 
        {
            i++;
            continue;
        }
        if(a[j]>=a[count]) 
        {
            j--;
            continue;
        }
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;
    }
    

        for(int l=0;l<=size-1;l++) //printing sorted array
         {
            cout<<a[l]<<" ";
         }
        cout<<endl;

    return 0;

}