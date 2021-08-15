//DJikstra's //Algorithms
#include<iostream>
using namespace std;
int main()
{                       // ifinity=1000
    int a[5][5]={   //A    B     C     D     E         //row represent starting point 
              /*A*/ {0   , 10  , 1000, 5   , 1000},     //Column represent destination
              /*B*/ {1000, 0   , 1   , 2   , 1000},     // arrays element represent 
              /*C*/ {1000, 1000, 0   , 1000, 4   },        //distance between them
              /*D*/ {1000, 3   , 9   , 0   , 2   },
              /*E*/ {7   , 1000, 6   , 1000, 0   },
                                                 };
    int m[5]={1,0,0,0,0}; //marking array
    
    for(int i =0 ; i<=5-1; i++)
    {
        int minpos;
        int min=1000; //infinity==1000
        for(int k=0; k<=5-1; k++)//for finding min
        {
            if(a[0][k]<min)
            {
                if(m[k]==0)
                {
                    min=a[0][k];
                    minpos=k;
                    
                }
            }
            
        }
        m[minpos]++;

        for(int j=0; j<=5-1; j++)
        {
            if(a[0][j]> min+a[minpos][j])
            {
                a[0][j]= min+a[minpos][j];
            }
        }

    }

for(int i=0; i<=5-1; i++)
{
    cout<<a[0][i]<<",";
}
    return 0;
}