#include<iostream>
using namespace std;
int main()
{
    //int size[]={30,35,15,5,10,20,25};//array sizes
  int size[]={30,35,15,5,10,20,25};//array sizes
  int n =sizeof(size)/sizeof(int); //numbers of array
  int a[n][n];
  for(int i=0;i<= n-1; i++ )// assigning zero 
  {
      for(int j=0; j<=n-1; j++ )
      {
      a[i][j]=0;
      }
  }

  for(int i=1,j=2;j<=n-1; i++,j++)//assinging A1*A2 valeues
  {
      a[i][j]=size[j-2]*size[j-1]*size[j];
  }

  for(int i=1;i<= n-1; i++ ) //showing arrays
  {
      for(int j=1; j<=n-1; j++ )
      {
        cout<<a[i][j]<<",";
      }
      cout<<endl;
  }
  cout<<"\n\n\n";

int i=3;
  while(i<=n-1)
  {
      //cout<<"while 1"<<endl;
      int j=i;
      int l=1;
      while(j<=n-1)
      {
         // cout<<"while 2"<<endl;
          int k=l;
          int min=INT_FAST32_MAX;
         // cout<<min<<endl;
          int x;
          while(k>=l && k<j)
          {

              x= a[l][k]+a[k+1][j]+size[l-1] * size[k]* size[j];
            //cout<<a[l][k]<<"+"<<a[k+1][j]<<"+"<<"*"<<size[l-1]<<"*"<<size[k]<<"*"<<size[j]<<endl;
            // cout<<"= "<<x<<endl;
            // cout<<"abhi "<<l<<" "<<k<<" "<<j<<endl;
              if(min > x)
              {
                  min =x;
              }
              k++;
          }
          cout<<"\n\n";
          a[l][j]=min;
          l++;
          j++;
          //cout<<l<<","<<j<<endl;
         // cout<<"while 2'"<<endl;
      }
      i++;
     // cout<<"while 1'"<<endl;
  }



   for(int i=1;i<= n-1; i++ ) //showing arrays
  {
      for(int j=1; j<=n-1; j++ )
      {
        cout<<a[i][j]<<",";
      }
      cout<<endl;
  }
 // cout<<a[1][3]<<endl;

    return 0;
}