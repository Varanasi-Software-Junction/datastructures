#include<stdio.h>
int main() 
{
    char player1[30],player2[30];
    int n=21,p1,p2;
    int losser,win;
    printf("enter the player1 name |\n");
    scanf("%s",player1);
    printf("enter the player2 name \n");
    scanf("%s",player2);
    while(1)
    {
      

    printf("%s choose the number  \n",player1);
    scanf("%d",&p1);
    n=n-p1;

    printf("%d\n",n);
    if(n==1)
    {
        printf("%s wins",player2);
        return 0;
    }
    printf("%s choose the number \n",player2);
    scanf("%d",&p2);
    n=n-p2;
    printf("%d\n",n);
    if(n==1)
    {
        printf("%s wins",player2);
        return 0;
    }
    }


    return 0;
}