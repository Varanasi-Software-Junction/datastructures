#include<stdio.h>
void binaryPrint(int n);
int main()
{
    int choice,number1,number2,number3;
    while(1)
    {
    printf("\n0-Quit,1-Input 1,2-Input 2,3-<<,4-Print 1,5-print 2,6->>,7-binary\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 0:
        return 0;
    case 1:
        printf("Input Number 1");
        scanf("%d",&number1);
        break;
    case 2:
        printf("Input Number 2");
        scanf("%d",&number2);
        break;
    case 3:
    printf("Enter the sheft side");
    scanf("%d",&number2);
        number1=number1<<number2;
        break;
    case 4:
        binaryPrint(number1);
        break;
    case 5:
         binaryPrint(number2);
         break;

    case 6:
    printf("Enter the shift right");
    scanf("%d",&number3);
    number1=number1>>number3;
    break;  
    case 7:
    binaryPrint(number1);
    break;
    default:
        printf("Invalid Choice");
        break;
    } 
    }
    return 0;
}
void binaryPrint(int n)
{
    int a[50]={0};
    int copy=n;
    int i=0,rem,mult,result;
    while(n>0)
    {
      rem=n%2; 
      n=n/2;
      a[i]=rem;
      i++;
      }
      printf("\nDec = %d, Bin = ",copy);
      i--;
      for(;i>=0;i--)
   printf("%d",a[i]);
   printf("\n");
}