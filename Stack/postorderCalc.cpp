#include<iostream> 
#include<stdlib.h>
using namespace std;
using namespace std;
typedef struct mynode{
    
    int data;
    int type;
    mynode* next;

} node;

void addLast(node** head, int val) //for pushing numbers
{ 
  node* newnode = (node*)malloc(sizeof(node));
  newnode->type= 1; //for number(int)
  
    
    newnode->data=val;
    newnode->next=NULL;

  if((*head)==NULL)
  {
    *head=newnode;
    return;
  }
  node* temp;
  temp=(*head);
  while(temp->next!=NULL)
  {
    temp = temp->next;
  }
  temp->next=newnode;
  
}

void addLast(node** head, char val) //for pushing operator
{ 
  node* newnode = (node*)malloc(sizeof(node));
  newnode->type= 0; // type =0 for operator(char)
  
    newnode->data=val;
    newnode->next=NULL;

  if((*head)==NULL)
  {
    *head=newnode;
    return;
  }
  node* temp;
  temp=(*head);
  while(temp->next!=NULL)
  {
    temp = temp->next;
  }
  temp->next=newnode;
  
}
int delAtFirst(node** head)
{
  if((*head)==NULL)
    return -1;
    char ans;
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

bool isOperand(int type)
{
if(type=1)
    return true;

return false;
}
int Operation (int p, int q , int r)
{
   // int ip= p-'0';
   // int iq= q -'0';
    int a;
   // char c;
    switch(r) 
    {
        case 47:  // int x ='/'; gives value of x=47
            a=p/q;
            
            return a;
        break;
        case 42:  //  int x ='*'; gives value of x=42
            a=p*q;
            return a;
        break;

        case 43: // int x ='+'; gives value of x=43/
            a=p+q;
            return a;
        break;
        case 45:
            a=p-q;
            return a;

        break;
        
         
    }
}
void show(node* head)
{
  while(head!=NULL)
  {
    if(head->type==0)
    {
    char c= head->data;
    cout<<c<<" ";
    head=head->next;
    continue;
    }
    cout<<head->data<<" ";
    head= head->next;
  }
  cout<<endl;
}

/*int precedence(char a)
{
    if(a=='/')
        return 3;
    if(a=='*')
        return 2;
    if(a=='+')
        return 1;
    if(a=='-')
        return 0;
    
    return -1;

}*/

int main()
{
    node* hd=NULL;
    addLast(&hd,2);
    addLast(&hd,3); 
    addLast(&hd,4);
    addLast(&hd,'*');
    addLast(&hd,'*');
    addLast(&hd,5);
   
    addLast(&hd,2);
    addLast(&hd,2);
    addLast(&hd,'/');
    addLast(&hd,'/');
    addLast(&hd,'+');
    show(hd);
    node* p;
    node* q;
    node* r;
    
    p=hd;
    q= hd->next;
    
    r= hd->next->next;
    
  while(1)
    {
     // cout<<"abhi "<<endl;
      
        if(r->type)
        {
         
          //cout<<"m ";
          
            p= q;
            q=r;
            r=r->next;
            
            continue;
        } 
        cout<<p->data<<" "<<(char)r->data<<" "<<q->data<<"= ";   
        p->data=Operation(p->data,q->data,r->data); 
        cout<<p->data<<endl;
        p->next=r->next;
        p=hd;
        if(hd->next==NULL)

        {
          cout<<"end condition"<<endl;
         
          break;
        }
        q= hd->next;
    
        r= hd->next->next;   

    }  
    cout<<hd->data<<endl; 
    

    return 0;
}