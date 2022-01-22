#include<stdio.h>
int main()
{
    //write a program to print summ all digits of a number
    int i,n,value;
    int sum=0;
    printf("Enter the number of items\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
           printf("Enter value no %d\n",i);
        scanf("%d",&value);
         sum=sum+value;  
    }
    printf("sum=%d",sum);
    return 0;
}