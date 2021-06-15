#include<iostream>
using namespace std;
int f(int n, int d)
{
    int ans=n;
    for(int i=0; i<=d-2; i++)
    {
        ans=ans/10;
    }
    return ans%10;
}
void CountingSort(int a[],int size,int d){
    
    int output[size];
    int frequency[10]={0};
     

    for(int i=0; i<=size-1;i++)//storing frquency of different numbers in range (0-9) 
    {

        frequency[f(a[i],d)]++;
    }
    for(int i =1 ;i<=10-1;i++)//storing cumulative frequency of i
    {
        frequency[i]= frequency[i] + frequency[i-1];
    }
    
    for(int i= size-1; i>=0; i--) //sorting
    {
        frequency[f(a[i],d)]--;
        output[frequency[f(a[i],d)]]=a[i];

    }
   for(int i=0; i<=size-1;i++)
   {
       a[i]=output[i];
   }
}
int main()
{
  /*  int a= 234;
    int b;
    b=a;
    int r;
    cout<<b<<endl;
   while(b!=0)
    {
        r=b%10;
        cout<<r<<endl;
        b=b/10;
    }*/
   // cout<<f(234,5)<<endl;
   int a[]={234,432,232,10000,456,0,23,56,234};
   int size= sizeof(a)/sizeof(int);
   int max=a[0];
   for(int i =1;i<=size-1;i++)
   {
       if(a[i]>max) max= a[i];
   }
   int count =0;
   while(max!=0)
   {
       max=max/10;
       count++;
   }
   for(int i=1; i<=count; i++)
   {
       CountingSort(a,size,i);
   }

   for(int i=0; i<=size-1; i++)
  { cout<<a[i]<<",";
  }

   
  

    return 0;
}