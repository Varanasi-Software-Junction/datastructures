#include<iostream>
using namespace std;
typedef struct mynode{
    int data;
    mynode* next;

} node;

void push(node** head,int value)
{
    if((*head)==NULL)
    {
      *head=  (node*)(malloc(sizeof(node)));
      (*head)->data=value;
      (*head)->next=NULL;
      return;
    }
    node* temp=(node*)malloc(sizeof(node));
    temp->data=value;
    temp->next=*head;
    *head=temp;
}
int pop(node** head)
{
  if((*head)==NULL)
    return -1;
    int ans;
  node* temp;
  temp=(*head);
  (*head)=(*head)->next;
  ans= temp->data;
  free(temp);
  return ans;
}
bool isEmpty(node* head)
{
    if(head==NULL)
    {
        return true;
    }
    return false;
}

int main()
{
    node* hd=NULL;
    int a[]={1,2,3,4,5,6};
    int size= sizeof(a)/sizeof(int);
    for(int i=0; i<=size-1; i++)
    {
        push(&hd,a[i]);
    }

    for(int i=0; i<size-1; i++)
    {
        cout<<pop(&hd)<<endl;
    }

    return 0;
}