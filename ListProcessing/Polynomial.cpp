#include<iostream>
using namespace std;
typedef struct  mynode{
    int coef;
    int pow;
    mynode* next;
} node;
void insert(node** head, int val,int pow)
{
    if((*head)==NULL)
    {
        node* newnode=(node*)malloc(sizeof(node));
        newnode->coef=val;
        newnode->pow=pow;
        newnode->next=NULL;
        (*head)=newnode;
        return;
    }
    insert(&((*head)->next),val,pow);
}

void showPol(node* temp)  //shows polynomial
{
     while(temp!=NULL)
   {
       cout<<temp->coef<<"x^"<<temp->pow;
       
       temp= temp->next;
       if(temp!=NULL)
       {
           cout<<" + ";
       }
   }
   cout<<endl;
}

void addPol(node**hd3,node* hd2, node* hd1)//add two polynomial
{
    node* temp= (*hd3);
    while(hd2!=NULL)
    {
        insert(hd3,hd1->coef + hd2 ->coef, hd2->pow);
        hd1 = hd1->next;
        hd2 = hd2->next;
    }
}

void mult(int *c, int *p, int c1, int p1, int c2, int p2)
{
   *c=c1*c2;
   *p= p1+p2;  
}

void multPol(node** hd3, node* hd2, node* hd1)
{
    node* temp= (*hd3);
     int a[4]={0};
    while(hd2!=NULL)
    {  
        node* temp=hd1;
        int c,p;
        while (temp!=NULL)
        {
            mult(&c,&p,temp->coef,temp->pow, hd2->coef, hd2->pow);
            cout<<c<<" "<<p<<" ";
            a[p]=a[p]+c;
            cout<<a[p]<<endl;
           temp=temp->next;
        }
        hd2=hd2->next;
    }
    for(int i=0; i<=4-1; i++)
    {
      insert(hd3,a[i],i);
    }
}

int main()
{
    node* hd1=NULL;
    node* hd2=NULL;
    int c1[]={1,2,3};
    int size= sizeof(c1)/sizeof(int);
    int c2[]={25,7,5};
   int count1=0;
   for(int i=0; i<=size-1; i++)
   {
       
       insert(&hd1,c1[i],i);
       insert(&hd2,c2[i],i);
   }
   cout<<"*********************************ADDITION*****************"<<endl;
   showPol(hd1);
   cout<<"+"<<endl;
   showPol(hd2);
   cout<<"_______________________"<<endl;
   
   node* hd3=NULL;
   addPol(&hd3,hd1,hd2);
   showPol(hd3);

   
  node* hd4=NULL;
  multPol(&hd4,hd1,hd2);
  //  node* a = mult(25,0,hd1);
   // showPol(a);
   showPol(hd4);

    

    return 0;
}