#include<iostream>
using namespace std;
int main(){
      int a[10];
    int pos= 0;
    int size=sizeof(a)/sizeof(int);
    int x,n,m;
    while(1)
    {
        int x;
        cin>>x;
       switch(x){
           case 0: return 0;
            case 1:
                if(pos<size)
                { cin>>n; 
                    a[pos]=n;
                    pos++;
                }
                else{
                    cout<<"\n Element is not inserted. Array is full."<<endl;
                }
                 break;
                
             case 3:
                {
                int p=0;
                int z=pos-2;
                cout<<"Enter the element you want to delete:"<<endl;
                cin>>m;
                for(int i=pos-1 ; i>=0;i--)
                {
                    if(a[i]==m) 
                    {
                        p++;
                        for(int j=i;j<=pos-2;j++)
                        {
                            a[j]=a[j+1];
                        }
                        
                        
                    }
                    
                    //else if(i>p) a[i]=a[i+1];
                }
                pos=pos-p;
                }
                break;
                case 5:
                {            
     
                //int mi=size-1;
               // if(pos<size-1) mi =pos;
               cout<<"Array is:_________________________"<<endl;
                for(int i=0; i<pos && i< size ; i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
                cout<<"__________________________________"<<endl;

                }
                break;
        }
        
    }
    return 0;

}