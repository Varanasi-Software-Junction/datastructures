#include<iostream>
using namespace std;
int main(){
    int a[]={9,8,7,6,5,4,3,2,1};
    int size=sizeof(a)/sizeof(int);
    int min,minpos;
    cout<<size<<endl;

    for(int i=0;i<=size-1;i++) //printing array 
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;


    for(int i=0; i<=size-2;i++)  //this loop will run size-1(i.e 0 to size-2) because we need to sort only size-1 elements
    {                             //and last element will be sorted automatically
        min=a[i];
        minpos=i;
      for(int j=i+1; j<=size-1; j++)//this loop is for finding min in subarray
         {
             if(min>a[j])
            {
            min=a[j];
            minpos=j;
             }
        
     } 
      
         
         a[minpos]=a[i];//swapping
         a[i]=min;    //swapping
          for(int l=0;l<=size-1;l++) //printing array at every step
         {
            cout<<a[l]<<" ";
         }
        cout<<endl;
        
    }
  
    
    cout<<endl;
   // cout<<min<<" "<<minpos;

    return 0;
}