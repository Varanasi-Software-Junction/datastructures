#include<stdio.h>
int main()
{
    int y;
    printf("ENTER THE YEAR:");
    scanf("%d",&y);
    if(y % 400 !=0 && (y % 4 !=0 || y % 100 == 0))
    printf(" IT IS NOT LEEP YEAR");
    else
    {
        printf(" IT IS LEEP YEAR");
    
    }
    
    return 0;
}