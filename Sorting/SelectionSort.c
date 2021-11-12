#include<stdio.h>
int main()
{
int a[]={4,3,7,-5,8};//Input Array
int n=sizeof(a)/sizeof(int);//Find size of array
int i,j,min,minpos,k,t;
printf("Input Array\n");
for(k=0;k<=n-1;k++)
printf("%d,",a[k]);
for(i=0;i<=n-2;i++)//Run the loop one time less than the number of elements
{
    min=a[i];
    minpos=i;//Initialize min and minpos for the loop
    for(j=i+1;j<=n-1;j++)
    if(a[j]<min)//Check for min and reassign
    {
        min=a[j];
        minpos=j;
    }
    t=a[i];//Swap minpos and ith element
    a[i]=a[minpos];
    a[minpos]=t;
    printf("\nArray after %d iterations \n",i+1);
for(k=0;k<=n-1;k++)
printf("%d,",a[k]);

}
printf("\nSorted Array\n");//Print the sorted array
for(k=0;k<=n-1;k++)
printf("%d,",a[k]);

}