#include<stdio.h>
#include<string.h>
void combination(char a[],int s,int e);
int main()
{
    char  a[]="abc";
    int n=strlen(a);
    combination(a,0,n);
}
    void combination(char a[],int s,int e)
    {
    for(int i=s;i<e-1;i++)
    {
        for(int j=i+1;j<e;j++)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            combination(a,s+1,e);
             temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    printf("\n%s,",a);
    

}