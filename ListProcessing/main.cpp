#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct mynode
{
  int data;
 struct mynode* next;
}listnode;


void swapref(int* x,int* y)
{
  int t=*x;
  *x=*y;
  *y=t;
}


void swapvalue(int x,int y)
{
  int t=x;
  x=y;
  y=t;
}
void addFirst(listnode** head,int value)
{
    if((*head)==NULL)
    {
      *head=  (listnode*)(malloc(sizeof(listnode)));
      (*head)->data=value;
      (*head)->next=NULL;
      return;
    }
    listnode* temp=(listnode*)malloc(sizeof(listnode));
    temp->data=value;
    temp->next=*head;
    *head=temp;
}
void addLast(listnode** head, int val)
{ 
  listnode* newnode = (listnode*)malloc(sizeof(listnode));
    newnode->data=val;
    newnode->next=NULL;

  if((*head)==NULL)
  {
    *head=newnode;
    return;
  }
  listnode* temp;
  temp=(*head);
  while(temp->next!=NULL)
  {
    temp = temp->next;
  }
  temp->next=newnode;
  
}
void addSort(listnode** head, int val)
{
  
  listnode* newnode= (listnode*)malloc(sizeof(listnode));
  newnode->data= val;
  newnode->next= NULL;
  if((*head)==NULL)
  {
    (*head)=newnode;
    return;
  }
  listnode* p;
  listnode* q;
  p=(*head);
  q=(*head)->next;
  if((*head)->data>val)
  {
    newnode->next=(*head);
    (*head)=newnode;
    return;
  }
  while(q!=NULL)
  {
    if(q->data> val)
    {
      p->next=newnode;
      newnode->next=q;
      return;
    }
    p=p->next;
    q=q->next;
  }
 if(val>= q->data)
 {
   q=newnode;
 }
  
}
void delAtFirst(listnode** head)
{
  if((*head)==NULL)
    return;

  listnode* temp;
  temp=(*head);
  (*head)=(*head)->next;
  free(temp);
}
void delAtLast(listnode** head)
{
  if((*head)==NULL)
  return;

  listnode* p=(*head);
  listnode* q=(*head)->next;
  if(q==NULL)
  {
    (*head)==NULL;
    free(p);

  }
  while(q->next!= NULL)
  {
    q=q->next;
    p=p->next;
    
  }
  p->next=NULL;
  free(q);
  
}
void reverse(listnode** head)
{
  if((*head)==NULL)
  return;
  if ((*head)->next==NULL)
  return;

  listnode* p;
  listnode* q;
  listnode* r;
  p=(*head);
  q=(*head)->next;
  r=q->next;
  if(r==NULL)
  {

    return;
  }
  p->next=NULL;
  while(r!=NULL)
  {
    if(r->next==NULL)
    {
      q->next=p;
      r->next=q;
    (*head)=r;
      return;
    }
    q->next=p;
    p=q;
    q=r;
    r=r->next;
    
  }

    
}
void traverse(listnode* head)
{
    cout<<endl;
    while(head!=NULL)
    {
        cout<<head->data<<",";
        head=head->next;
    }
    cout<<endl;

}
int main()
{
   listnode* hd=NULL;
  //Add First, Add Last, Add Middle, Del, Traverse, Reverse
 // while(1)
   //{
     cout<<"\n----------------------------------------------------------\n"<<endl;
     int x;
     //cout<<"Type 0 to exit\n\t 1 to add element at head \n\t 2 to add element at end\n\t 3 to add element in sorted manner\n\t";
    addSort(&hd,8);
    addSort(&hd,1);
    addSort(&hd,-1);
    addSort(&hd,3);
     traverse(hd);
    addSort(&hd,2);
    addSort(&hd,5);
    addSort(&hd, 0);
    traverse(hd);
    delAtFirst(&hd);
    traverse(hd);
    delAtLast(&hd);
    traverse(hd);
    reverse(&hd);
    traverse(hd); 
    

 //  }
    return 0;
}
