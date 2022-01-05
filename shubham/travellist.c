#include<stdio.h>
int main()
{
    char a[]={"Gangaghat" "kalvherev" "MritunjaiMahadev"};
    int i;
    int n=sizeof(a)/sizeof(char);
    for(i=0;i<=n-1;i++)
    {
        printf("\n%s",a[i]);
    }
    return 0;
}