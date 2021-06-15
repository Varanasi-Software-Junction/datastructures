#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct mynode
{
  int data;
  mynode* next;
}listnode;
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
    addFirst(&hd,1);
    addFirst(&hd,2);
    addFirst(&hd,3);
    addFirst(&hd,4);
    addFirst(&hd,5);
    traverse(hd);


    return 0;
}
