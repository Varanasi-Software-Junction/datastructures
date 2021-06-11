#include<iostream>
using namespace std;
int main(){
      int a[9]={1,2,3,1,2,3,4,5};
      int size= sizeof(a)/sizeof(int);
      a[size-1]=a[size-2]-1;  //extra element to neglect the error if the largest increasing sequence is at last of array
      
      int p=0;
      int length;
      int maxcount=-1,start=-1, end=-1;//maxcount is lenght of largest increasing sequence
      cout<<a[0];       //printing first element
      for(int i=1;i<=size-2;i++)
      {
          if(a[i]>a[i-1]) cout<<" "<<a[i];
          if(a[i]<a[i-1])    //line change
          {
              cout<<"\n"<<a[i];
             length= i-p;
             if(length>maxcount)  
             {
                 maxcount=length;
                 start=p;
                 end=i-1;
             }
             p=i+1;  //changing starting index for next sequence
          }
      }
      // n- p1  
      cout<<endl;
      cout<<"starting index="<<start<<" Ending index="<<end<<" "<<"Length of sequence= "<<maxcount<<endl;
    return 0; 

}