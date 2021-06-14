#include<iostream>
using namespace std;

void upAdjust(int a[],int pos)
{
    int root=pos/2;
    if(root<1)
    return;
    if(a[root]>=a[pos])
    return;
    int t=a[root];
    a[root]=a[pos];
    a[pos]=t;
    upAdjust(a,root);
}

void downAdjust(int a[],int pos,int size)
{
    
    if(size<=0)
    return;
    int value=a[pos];
    int l=2*pos;
    int r=2*pos+1;
    if(l>=size-1)
    return;
    int t;
    int maxpos=a[l];
    if(r<=size-1)
    {
        
        downAdjust(a,pos,size-1);
    }
    else
    {

    int max=a[l];
    int maxpos=l;
    if(max<a[r])
    { 
         if(a[r]>a[maxpos])
         maxpos=r;
    }
    if (a[pos]>=a[maxpos])
    return;
    t=a[pos];
    a[pos]=a[maxpos];

    a[maxpos]=t;
    downAdjust(a,maxpos,size-1);
    }
    
    
    
    
}


/*void Heapify(int a[], int heap[],int i, int size)
{
    heap[i]=a[i];
    int root= i/2;
    if(i>size)
        return;
    int t;
    if(heap[root]<heap[i])
    {
        t=heap[root];
        heap[root]=heap[i];
        heap[i]=t;
    }
    
    Heapify(a,heap,i+1,size);
    
}*/
int main()
{
    int a[] ={0,3,2,6,7,4,1,8,9};
    int size= sizeof(a)/sizeof(int);
    int heap[size]={0};
    int i=0;
    for(int i=1;i<=size-1;i++)
    {
        heap[i]=a[i];
        upAdjust(heap,i);
    }
    
    for(int i=1;i<=size-1; i++) //heapified array
    {
        cout<<heap[i]<<",";
    }
    cout<<endl;

    for(int i=1;i<=size-1;i++)
    {
        a[i]= heap[1];
        cout<<heap[1]<<",";
        downAdjust(heap,1,size);
    }
    cout<<endl;
      for(int i=1;i<=size-1; i++) //sorted array
    {
        cout<<a[i]<<",";
    }


    
    return 0;
}