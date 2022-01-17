#include<stdio.h>
int infinity=10000;
void printall(int a[5][5]);
int minvalue(int x,int y);

int main()
{
    int n=5;
    int distances[5][5]={
        {-1,10,infinity,5,infinity},
        {infinity,-1,1,2,infinity},
        {infinity,infinity,-1,infinity,4},
        {infinity,3,9,-1,2},{7,infinity,6,infinity,-1}
        };
        int min=distances[0][1],minpos=1,i;

    printall(distances);
    //Find the position of the min element in line 0
    for(i=1;i<=n-1;i++)
    {
        if(distances[0][i]<min)
        {
            min=distances[0][i];
            minpos=i;
        }
    }
    int startdistance=distances[0][minpos];
    for(i=1;i<=n-1;i++)
    {
        if(i==minpos)
        continue;
        distances[0][i]=minvalue(distances[0][i],startdistance + distances[minpos][i]);


    }
    printf("\n\n");
printall(distances);



    printf("min=%d\tpos=%d\n",min,minpos);
    

}
void printall(int a[5][5])
{
    int i,j,n=5,data;
    printf("\t");
    for(i=0;i<=n-1;i++)
    printf("%c\t",i + 'A');
    printf("\n");
    for(i=0;i<=n-1;i++)
    {
        printf("%c\t",i + 'A');
        for(j=0;j<=n-1;j++)
        {
        data=a[i][j];
            if(data>=infinity)
            printf("inf\t");
        else
            if(data==-1)
                printf("-\t");
            else 
                printf("%d\t",data);
        }
    
    printf("\n");
}
}
int minvalue(int x,int y)
{ 
    if(x<=y)
    return x;
    else 
    return y;
}


