#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5,6};
int n=sizeof(a)/sizeof(int);
int i;
int *p;
for(i=n-1; i>=0; i--)
{
    printf("%d,",a[i]);
}
p=a;
printf("\n");
for(i=n-1; i>=0; i--)
{
    printf("%d,",*(p+i));
}
int *p1=&a[n-1];
printf("\n");
for(p=a; p1>=p; p1--)
{
    printf("%d,",*p1);

}
p=a;
p1=&a[n-1];
printf("\n");
for(; p1>=p;p1--)
{
    printf("%d,",*p1);
}
    return 0;
}