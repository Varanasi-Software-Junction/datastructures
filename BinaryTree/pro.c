#include<stdio.h>
int main()
{
    int i=6;
    int true,false,n;
    int s;
    int count=0;
    for(count=1;count<=5;count++)
    //printf("count=",count);
    switch(i=1)
    {

    case 1:

    printf("Q= c is a programing language?\n");
    printf("ANS=");
    scanf("%d",&s);
    if(s==1)
    {
        printf("Right\n");
    }
    else
    {
       printf("Wrong\n");
    }
    
    case 2:

    printf("Q= c is a case sensetive language?\n");
    printf("ANS=");
    scanf("%d",&s);
    if(s==1)
    {
        printf("Right\n");
    }
    else
    {
       printf("Wrong\n");
    }
    case 3:

    printf("Q= Dennish ritci is the devlop in c language in 1972?\n");
    printf("ANS=");
    scanf("%d",&s);
    if(s==1)
    {
        printf("Right\n");
    }
    else
    {
       printf("Wrong\n");
    }
    case 4:
    printf("Q= spaces and coma allow in variable name?\n");
    printf("ANS=");
    scanf("%d",&s);
    if(s==0)
    {
        printf("Right\n");
    }
    else
    {
       printf("Wrong\n");
    }
    case 5:
    printf("Q= c language has 32 keywords?\n");
    printf("ANS=");
    scanf("%d",&s);
    if(s==1)
    {
        printf("Right\n");
    }
    else
    {
       printf("Wrong\n");
    }
    break ;
    }
    printf("count=%d",count);
    
    return 0;
}