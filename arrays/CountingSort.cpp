#include<iostream>
using namespace std;
int main()
{
    int a[]={9,8,7,6,5,5,5,5};
    
    int size =sizeof(a)/sizeof(int);
    int output[size];
    int frequency[10]={0};
     for(int l=0; l<=size-1;l++)//printing above array
    {
        cout<<a[l]<<",";
    }
    cout<<endl;

    for(int i=0; i<=size-1;i++)//storing frquency of different numbers in range (0-9) 
    {
        frequency[a[i]]++;
    }
    for(int i =1 ;i<=10-1;i++)//storing cumulative frequency of i
    {
        frequency[i]= frequency[i] + frequency[i-1];
    }
    for(int i=0;i<=9;i++)//printing cumulative frequency
    cout<<frequency[i]<<",";
    cout<<endl;
    for(int i= size-1; i>=0; i--) //sorting
    {
        frequency[a[i]]--;
        output[frequency[a[i]]]=a[i];

    }

    for(int l=0; l<=size-1;l++)
    {
        cout<<output[l]<<",";
    }
    return 0;
}