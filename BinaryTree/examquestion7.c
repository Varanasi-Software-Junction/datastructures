#include<stdio.h>
int main()
{
    int n,rem;
    int m=10;
    printf("ENTER THE 4 DIGIT NUMBER :");
    scanf("%d",&n);
    if(n<1000 || n>9999)
    {
        printf("\nError!please enter the 4 digit:");
        return 0;
    }
        while(n>0)
        {
        
        rem=n%10;
        n=n/10;
        printf("%d",rem);  
        }
        

    
    return 0;
}