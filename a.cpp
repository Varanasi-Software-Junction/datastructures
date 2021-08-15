#include<iostream>
using namespace std;
int main()
{
    int a=12453;
    int temp= a;
    
    int count=0;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    int d[count];
    temp=a;
    for(int i=0; i<=count-1; i++)
    {
        d[i]=temp%10;
        temp=temp/10;
        
    }
    int k=-1;
    for(int i=1; i<=count-1; i++)
    {
        if(d[i] < d[i-1])
        {
           
            k=i;
            break;
        }
    }
    if(k==-1)
    {
        cout<<"NOtpossible"<<endl;
    }
    else{
        for(int i=0; i<=k-1; i++) 
    {
        for(int j=0; j<=k-1-i; j++)
        {
            if(d[j]<=d[j+1])
            continue;
            
                temp=d[j];      //swapping a[j] and a[j+1]
                d[j] = d[j+1];
                d[j+1] =temp;
            
        }
          
    }
        
    }
    for(int i=count-1; i>=0; i--)
    {
        cout<<d[i];
    }


  //  cout<<count<<endl;
    return 0;

}