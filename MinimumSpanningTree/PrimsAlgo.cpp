#include<iostream>
using namespace std;
int isIn(int m[], int val)
{
        if(m[val]==1)
        {
            return 1;
        }
        
    
    return 0;

}

int main()
{
    int n=9;
    
    int a[n][n]={//a   b    c    d    e    f    g    h    i
       /*a*/    {0   ,4   ,1000,1000,1000,1000,1000,8   ,1000},
       /*b*/    {4   ,0   ,8   ,1000,1000,1000,1000,11  ,1000},
       /*c*/    {1000,8   ,0   ,7   ,1000,4   ,1000,1000,2   },
       /*d*/    {1000,1000,7   ,0   ,9   ,14   ,1000,1000,1000},
       /*e*/    {1000,1000,1000,9   ,0   ,10  ,1000,1000,1000},
       /*f*/    {1000,1000,4   ,14  ,10  ,0   ,2   ,1000,1000},
       /*g*/    {1000,1000,1000,1000,1000,2   ,0   ,1   ,6   },
       /*h*/    {8   ,11  ,1000,1000,1000,1000,1   ,0   ,7   },
       /*i*/    {1000,1000,2   ,1000,1000,1000,6   ,7   ,0   }    };
    int m[n]={1,0,0,0,0,0,0,0,0};//makring array marked 0th index equal 1 because we'll start with zero index
    char p[n]={'a','b','c','d','e','f','g','h','i'};
    int i=0;
    int totdis=0;
    for(int i=0; i<=n-1; i++)
    {
        cout<<i<<" "<<m[i]<<" "<<isIn(m,i)<<endl;
    }
    int minposR;
    int minposC;
    while(i<=n-2)
    {
        cout<<"abhi"<<endl;
        int min=1000;
        
        
           for(int k=0; k<=n-1; k++)
            {
                if(isIn(m,k))
                {
                
                for(int j=0; j<=n-1; j++)
                    {
                        

                        if((!isIn(m,j)) && min >= a[k][j])
                        {  
                          //  cout<<"M"<<endl;
                            min=a[k][j];
                             minposC=j;
                             minposR=k;
                        }
                    }
                
                }
            }
            cout<<p[minposR]<<"->"<<minposC<<p[minposC]<<endl;
            cout<<"Maur"<<endl;
            m[minposC]=1;
           totdis=totdis + a[minposR][minposC];
            cout<<"cccc"<<endl;
            
        i++;
        

    }    
cout<<totdis<<endl;
    //m[minposC]=1;
   // for(int i=0; i<=n-1; i++) cout<<m[i];
   

    return 0;
}