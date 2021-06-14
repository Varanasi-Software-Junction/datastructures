#include<iostream>
using namespace std;


int main()
{
int a[]={0,2,7,8,3,4,5};
int size=sizeof(a)/sizeof(int);
int heap[size];

int i=1;
while(i<=size-1)
{
   heap[i]=a[i];
    
    int pos=i;
    while(1)
    {
        int value=heap[pos];
      int  root=pos/2;
      if(root<1)
      break;
      int rootvalue=heap[root];
      if(rootvalue>=value)
      break;
      int t=heap[pos];
      heap[pos]=heap[root];
      heap[root]=t;
pos=root;

    }
    i++;
}

for(int i =1; i<=size-1; i++)//printing heapified array
{
    cout<<heap[i]<<",";
}
cout<<endl;

int n=size-1;
int k=1;
while(1)
{
    a[k]=heap[1];
    heap[1]=heap[n];
    n--;
    //*****************************************************
  int pos=1;
while(1)
{
int left=2*pos;
int right=2*pos+1;
if(left>n)
break;
int maxpos=left;
if(right<=n)
{
    if(heap[right]>heap[left])
    maxpos=right;
}
if(heap[maxpos]<=heap[pos])
break;
int t=heap[maxpos];
heap[maxpos]=heap[pos];
heap[pos]=t;
pos=maxpos;
}
    //*****************************************************
    k++;
    if(k>size-1)
    break;
}




for(int i =1; i<=size-1; i++)//printing heapified array
{
    cout<<a[i]<<",";
}


    return 0;
}