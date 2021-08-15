#include<iostream>
#include<stdlib.h>
#include<stack>
using namespace std;

typedef struct mynode{
    int data;
    int count;
    mynode* left;
    mynode* right;

} node;

void insert(node** root, int val)
{
        node* newnode= (node*)malloc(sizeof(node));
        newnode->data=val;
        newnode->count=0;
        newnode->left=NULL;
        newnode->right=NULL;
   
    node** temp= (root);
    while(1)
    {
         if(*temp==NULL)
        {
            //cout<<"abhi";
            *temp = newnode;
            return;  
        }
        
        if(val<(*temp)->data)
        {
         temp= &((*temp)->left);
         continue;
        }
        else
        {
            temp= &((*temp)->right);
            
        }
    }

}
void preorder(node* root)
{
    stack <node*> s;
    node* temp = root;
    s.push(temp);
    cout<<temp->data<<",";
    temp=temp->left;

    while(1)
    {
       
        

        while(temp!=NULL)
        {
        cout<<temp->data<<",";
            if(temp->right!=NULL)
                s.push(temp);
        temp=temp->left;
        
        }
         
         if(s.empty())
        {
            cout<<endl;
            return;
        }
        
        
        temp=s.top();
        s.pop();
      /*  if(temp->left==NULL && temp->right==NULL)
        {
            continue;
        }*/
        temp=temp->right;
        
        
        
        
    }
    cout<<endl;
}
void inorder(node* root)
{
    
    stack <node*> s;
    node* temp = root;
    s.push(temp);
    temp=temp->left;
    while(1){
        
        while(temp!=NULL)
        {
            
            s.push(temp);
            temp=temp->left;
            
        }
        if(s.empty())
        {
            cout<<endl;
            return;
        }
        
        temp=s.top();
        s.pop();
        cout<<temp->data<<",";
        temp = temp->right;
    }
    cout<<endl;
}
void postorder(node* root)
{
    stack <node*> s;
    node* temp = root;
    //s.push(temp);
    //temp=temp->left;
    while(1)
{
    while(temp!=NULL)
    {
        temp->count++;
        s.push(temp);
        //cout<<temp->count<<","<<endl;
    
        temp=temp->left;
        
    }
    if(s.empty())
    {
        cout<<"endl"<<endl;
        return;
    }
    temp=s.top();
    s.pop();
    
    
    if(temp->count>=2)
    {
        //s.pop();
        cout<<temp->data<<",";
        temp=NULL;
     //  cout<<"if"<<endl;
    }
    else
    {
        temp->count ++;
       // cout<<"else"<<endl;
        s.push(temp);

        temp= temp->right;
    }
}


}
int main()
{
    node* root=NULL;
    int a[]={2,3,1};
    int size=sizeof(a)/sizeof(int);
    for(int i=0; i<=size-1; i++)
    {
        //cout<<"abhi"<<endl;
        insert(&root,a[i]);
    }
    preorder(root);

   inorder(root);
   postorder(root);
   
    return 0;
}