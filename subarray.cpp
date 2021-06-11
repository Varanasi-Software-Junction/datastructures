#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,7,6,5,9,3,2};
    int sizea= sizeof(a)/sizeof(int);
    int b[]={9,3,2};
    int sizeb= sizeof(b)/sizeof(int);
    for(int i=0;i<sizea;i++){
        int j=i;
        
        int t=0;
        if(a[i]==b[0])
        {
            for(;t<sizeb && j<sizea && a[j]==b[t] ;t++,j++)
            {
                ;

            }
            if(t==sizeb)
            { cout<<"b is subarray of a starts at index "<<i<<" of array a"<<endl;
                break;
            }
        }
    }

    return 0;
}