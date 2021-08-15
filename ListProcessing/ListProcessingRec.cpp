#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct mynode{
    int data;
    mynode* next;
} node;
void addFirst(node** head,int val)
{
    node* newnode= (node*)malloc(sizeof(node));
    newnode->data=val;
    newnode->next=NULL;
    if((*head)==NULL)
    {
        (*head)=newnode;
        return;
    }
    newnode->next = (*head);
    (*head)=newnode;
}
void traverse(node* head)
{
    if(head==NULL)
    {
     cout<<endl;
    return;
   
    }
    cout<<head->data<<",";
    traverse(head->next);
}
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
void addSort(node** head, int val)
{
    if((*head)==NULL)
        {
            node* newnode=(node*)malloc(sizeof(node));
        newnode->data= val;
        newnode->next=NULL;
        (*head)=newnode;
        return;

        }
    if((*head)->data > val)
    {
         node* newnode=(node*)malloc(sizeof(node));
        newnode->data= val;
        newnode->next=(*head);
        (*head)=newnode;
        return;
    }
    

    if((*head)->next==NULL)
    {
         node* newnode=(node*)malloc(sizeof(node));
        newnode->data= val;
        newnode->next=NULL;
        (*head)->next=newnode;
        return;
        
    }
    if((*head)->next->data > val)
    {
        node* newnode=(node*)malloc(sizeof(node));
        newnode->data= val;

        newnode->next=(*head)->next;
        (*head)->next=newnode;
        return;   
    }
    addSort(&((*head)->next),val);

}
void delAtLast(node** head)
{
    if((*head)==NULL)
    return;
    if((*head)->next==NULL)
    {
        node* temp;
        temp=(*head);
        (*head)=NULL;
        free(temp);
        return;
    }
    if((*head)->next->next==NULL)
    {
        node* temp;
        temp=(*head)->next->next;
        (*head)->next=NULL;
        free(temp);
        return;

    }
    delAtLast(&((*head)->next));
}
void reverse(node** head)
{
    if(head==NULL)
    return;
    if((*head)->next->next==NULL)
    {
        (*head)->next->next=(*head)->next;
        
    }
    reverse(&((*head)->next));

}


int main()
{
    node* hd=NULL;
  /*  addFirst(&hd,0);
    addFirst(&hd,1);
    addFirst(&hd,2);
    addFirst(&hd,3);
    addLast(&hd,4);
    addLast(&hd,5);*/
    addSort(&hd,9);
    delAtLast(&hd);
    traverse(hd);
    addSort(&hd,5);
    traverse(hd);
    addSort(&hd,8);
    traverse(hd);
    addSort(&hd,4);
    traverse(hd);
    addSort(&hd,10);
    traverse(hd);
    delAtLast(&hd);
    traverse(hd);


    return 0;
}