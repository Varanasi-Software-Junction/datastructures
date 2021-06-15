#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t=100;
    int count=0;
    int i=2;
    int k=3;
   // int m=-1;
    
   while(i<=t)
    {
        int sqr=sqrt(i);// if a number is not divisible by numbers in between 2 to 
                        //square root of the number then it is prime number
        int f=0;
        if(i%2!=0) //if a number is not divisible by 2
        {              // then it will not be devisible by any even number
            for(int j=3; j<=sqr; j=j+2)//only checking for odd numbers
            {
                count++;
                 if(i%j==0)
                 {
                    f=1;
                    break;
                }   
                
            }

        }
        else{
             for(int j=2; j<=sqr; j++)
            {
                count++;
            
                if(i%j==0)
                {
                    f=1;
                    break;
                }
            }
        }
        
        if(f==0)
        {
            cout<<i<<",";
        }

    if(k==3)
    {
        i++;
        k--;
        continue;
    }
    if(k==2 || k==1)
    {
        i=i+2;
        k--;
        continue;
    }
    if(k==0)
    {
        i=i+4;
        k++;
    }

    }

    cout<<"\n"<<count<<endl;
    return 0;
}