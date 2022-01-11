#include<stdio.h>
int main()
{
    int p,c,m,h,e;
    int total,fail;
    float per;
    printf("Enter the 5 subject name\n");
    printf("Enter the phy marks\n");
    scanf("%d",&p);
    printf("Enter the chem marks\n");
    scanf("%d",&c);
    printf("Enter the math marks\n");
    scanf("%d",&m);
     printf("Enter the hindi marks\n");
    scanf("%d",&h);
     printf("Enter the eng marks\n");
    scanf("%d",&e);
    total= p+c+m+h+e;
    {
    printf("Total marks=%d\n",total);
    }
    per=total/5.0;
    {
    printf("persentage=%.3f\n",per);
    }
    if(p<33 || c<33 || m<33 || h<33 || e<33)
    {
        printf("Fail");
        return 0;
    }
    if(per>=60)
    {
    printf("first divesion:");
    }
    if(per>=40 && per<=59)
    {
    printf("second devision:");
    }
      if(per==33 && per<=39)
    {
        printf("Third devision");
    }
    if(per<33)
    {
        printf("Fail");
    }
    return 0;

    
}