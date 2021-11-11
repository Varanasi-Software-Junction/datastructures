#include<stdio.h>
int main()
{
    int a[] = {10,44,55,56,5,7,9,44,55,66,4,6,3,0};
    int maxlength=0,p1=0,p2,maxp=0,i,j;
    int length=0;
    int n=sizeof(a)/sizeof(int);
    printf("%d\n",n);
    
    for(i=1;i<=n-1;i++ )
    {
        if(a[i]>=a[i-1])
            continue;
        p2=i;
        if((p2-p1)>maxlength)
        {
            maxlength=p2-p1;
            maxp=p1;
        }
        printf("%d,%d\n",p1,p2);
        for(int j=p1;j<=p2-1;j++)
        printf("%d,",a[j]);
        printf("\n");
        p1=p2;


    }
 printf("Max Length=%d\n",maxlength);
 p2=maxp+maxlength;
        for(int j=maxp;j<=p2-1;j++)
        printf("%d,",a[j]);
        printf("\n");

    return 0;
}