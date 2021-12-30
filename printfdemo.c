#include<stdio.h>
#include<stdlib.h>
typedef struct mynode
{
    struct mynode* next;
   
    
    int data;
}listnode;

int main()
{
    listnode* hd=NULL;
    listnode* temp=(listnode*)malloc(sizeof(listnode));
    temp->next=NULL;
    temp->data=1;
    hd=temp;
    while (hd!=NULL)
    {
        printf("%d,",hd->data);
        hd=hd->next;
    }
    
    return 0;
}