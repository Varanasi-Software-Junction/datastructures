#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value a :");
    scanf("%d",&a);
    printf("Enter the value b :");
    scanf("%d",&b);
    printf("BEFORE SWAPING a=%d b=%d",a,b);
    printf("\n");
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("AFTER SWAPNG a=%d b=%d",a,b);
    return 0;
}