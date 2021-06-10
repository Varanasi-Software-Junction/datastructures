#include <iostream>
using namespace std;
int main()
{
    
    int a[10];
    int pos= 0;
    int size=sizeof(a)/sizeof(int);
   // cout<<size;
    int x,n,m;
    while(1){
        cout<<"---------------------------------------------------------------------------------------------------"<<endl;
        cout<<"Type 1 to add element\n\t 2 replace any element\n\t3 to delete an element\n\t4 to perform Binary search\n\t5 to show array\n\t6 to find max and second max\n\t 0 to exit program"<<endl;
        cin>>x;
        switch(x){
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
            
            case 2:
              {  cout<<"\nEnter the element you want to replace :"<<endl;
                cin>>m;
                cout<<"Enter the element you want to insert at the deleted element:"<<endl;
                cin>>n;
                int count =0;
                for(int i=0; i < size; i++)
                {
                    if(a[i]==m)  
                    {
                        a[i] = n;
                        count++;
                    }
                }
                if( count==0) cout<<"!!!!The element you want to delete does not exist in array!!!!"<<endl;
                }
                break;
            case 3:
 {
                int p=0;
                //int z=pos-2;
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
            case 4:
            {
                    int s;
                cout<<"Enter value for search:"<<endl;
                cin>>s;
                int l=0;
                 int r = size-1;
                while(1)
                {
                    int mid=(r+l)/2;
                    if( s==a[mid])
                        {
                            cout<<"l = "<<l<<" mid= "<<mid<<" r= "  <<r<<endl;
                            cout<<s<<" is found at index "<<mid<<endl;
                             break;
                       } 
            
                     if(s<a[mid])
                    {
                        cout<<"l = "<<l<<" mid= "<<mid<<" r= "  <<r<<endl;         
                             r=mid-1;
                        }
                    else{
                            cout<<"l = "<<l<<" mid= "<<mid<<" r= "  <<r<<endl;
                        l=mid+1;
                
            
                    }
                       if(r<l)
                        {
                                cout<<s<<" does not exist in array"<<endl;
                                break;

                        }       
                 }
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
            case 6:
            { int m1,m2;
                 for(int i=1 ;i<pos; i++)
                {
                    if(i==1) //for assinging m1 larger of first two element and m2 smaller of frist two element
                    {
                         if(a[0]>a[1])
                            {
                                m1=a[0];
                                m2=a[1];
                            }
                        else{
                            m1=a[1];
                            m2=a[0];
                        }
                    }
                    if(a[i]>=m1)
                    {
                        m2=m1;
                        m1=a[i];
                    }
                    else if(a[i]>m2)
                    {
                        m2=a[i];
                    }
          
                } 
                cout<<"Max="<<m1<<" Second max= "<<m2<<endl;
            }
            break;

            case 0:
                return 0;
                

        }


    }


    return 0;
}