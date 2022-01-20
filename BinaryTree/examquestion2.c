#include<stdio.h>
int main()
{
    //find max value of n given value using through keybord
    int n,max,i,value;
    printf("Enter N\n");
    scanf("%d",&n);
    printf("Enter value\n");
    scanf("%d",&value);
    max=value;
    for(i=2;i<=n;i++)
    {
            printf("Enter value\n");
    scanf("%d",&value);
    if(value>max)
    max=value;
    }
    printf("max=%d",max);
    


    return 0;
}