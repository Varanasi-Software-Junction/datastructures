#include<stdio.h>
//#define p=printf;
/*
n=4   
         i     j    k    j=4-i, n-i      0     i    
                                        00    1
---0     1     3    1       3          000
--000    2     2    3       2         0000
-00000   3     1    5       1
0000000  4     0    7       0

1,2,3,4,5,6,=i
2,4,6,8,10 = 2*i
1,3,5,7,9 = 2*i-1
*/
int main()
{
    int i,j;
    int n=4; 
    int choise;
    while(1)
    {  
    printf("\n1 peramid stret,2 peqramid moov");
    scanf("%d",&choise);
    switch(choise);
    { 
        case 0:
        return 0;
        break;
        cases 1:
        
    }
    for(i=1; i<=n; i++)  //row

{
    for(j=1; j<=n-i; j++)  //space
    printf(" ");


    for(j=1; j<=2*i-1; j++)  //star
    printf("0");
    printf("\n");
}
}


