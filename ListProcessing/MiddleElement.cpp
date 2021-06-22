#include<iostream>
using namespace std;
typedef struct mynode
{
    int data;
    mynode* next;

}node;
void addLast(node** head, int val)
{
    if((*head)==NULL)
    {
        node* newnode=(node*)malloc(sizeof(node));
        newnode->data= val;
        newnode->next=NULL;
        (*head)=newnode;
        return;  
    }
    addLast(&((*head)->next),val);
}
int main()
{
    node* head=NULL;

    int a[]={1,2,3,4,5,6};
    int size= sizeof(a)/sizeof(int);
   
    for(int i=0; i<=size-1; i++)
    {
        cout<<a[i]<<",";
       addLast(&head,a[i]);
    }
    cout<<head->data<<endl;
   node* t=head;
   while(t!=NULL)
    {
        cout<<t->data<<",";
        t=t->next;
        
    } 
    cout<<endl;
    node* t1;
    t=head;
    t1=head;
    int count =0;
    int sizel=0;
    while(t!=NULL)
    {
        sizel++;
       t=t->next;
       if(count==2)
       {
           t1=t1->next;
           count=0;
          continue; 
       } 
       
       count++;
    }
    if(sizel%2!=0)
    {
    cout<<t1->next->data<<endl;
    }
    if(sizel%2==0)
    {
        cout<<t1->data<<","<<t1->next->data<<endl;
    }
    return 0;
}