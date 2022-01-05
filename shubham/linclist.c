#include<stdio.h>
#include<stdlib.h>
typedef struct mynode
{
    int data;
    struct mynode* next;
    
}ListNode;
void addNode(ListNode** head,int data);
void addlast(ListNode** head,int data);
void traverse(ListNode* head);
int count(ListNode* head);
int main()
{
//Make a search and a count function
ListNode* head=NULL;
int i;
for(i=1;i<=10;i++)
//addNode(&head,i);
addlast(&head,i);

traverse(head);

printf("\nCount = %d",count(head));

    return 0;

}  
int count(ListNode* head)
{
    int n=0;
     while(head!=NULL)
    {
        n++;
        head=head->next;
    }
    return n;

}      
void addNode(ListNode** head,int data)
{
    int left,right;
    ListNode* temp=(ListNode*)malloc(sizeof(ListNode));
    temp->next=*head;
    temp->data=data;
    *head=temp;

}
void addlast(ListNode** head,int data)
{
    ListNode* p;
    ListNode* temp=(ListNode*)malloc(sizeof(ListNode));
    temp->next=NULL;
    temp->data=data;
        if(*head==NULL)
    {
       *head=temp;
       return;
    }
    p=*head;

    while (p->next!=NULL)
    {
        p=p->next;
    }
    
    p->next=temp;
}

void traverse(ListNode* head)
{
    printf("\n");

    while(head!=NULL)
    {
        printf("%d,",head->data);
        head=head->next;
    }

    printf("\n");

}