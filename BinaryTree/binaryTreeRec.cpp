#include<iostream>
#include<stdlib.h>
#include<queue>
using namespace std;
typedef struct mynode{
    int data;
    mynode* left;
    mynode* right;
} node;

void insert(node** root, int val)
{
   
    if((*root)==NULL)
    {
         node* newnode= (node*)malloc(sizeof(node));
        newnode->data=val;
        newnode->left=NULL;
        newnode->right=NULL;

        (*root)=newnode;
        return;
    }
    if(val<(*root)->data)
    {
        insert(&((*root)->left), val);
    }

    if(val>(*root)->data)
    {
        insert(&((*root)->right),val);
    }
    

}
void preorder(node* root)
{
    if(root==NULL)
    {
        //cout<<"endl";
        return;
    }

    cout<<root->data<<",";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<",";
    inorder(root->right);
}
void postorder(node* root)
{
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<",";
}
int max(int a, int b)
{
    int m=a;
    if(m<b)
    {
        m=b;
    }
    return m;
}
int depth(node* root)
{
    if(root==NULL)
    return 0;
    //if(root->left==NULL && root->right==NULL)
    //return 1;
    
    return 1 + max(depth(root->left),depth(root->right));
}
int maxbreadth(node* root)
{
    queue <node*> q;
    int max =0;
    int lenght;
    node* temp=root;
    q.push(temp);
    while(!q.empty())
    {
        
       temp = q.front();
        q.pop();
        //cout<<"a"<<q.size()<<endl;
        if(temp->left!=NULL)
         q.push(temp->left);
        if(temp->right!=NULL)
         q.push(temp->right);

        if(q.size()>max)
         {
             //cout<<q.size()<<endl;
           //  cout<<"abhi";
             max=q.size();
         } 
    
          
    }
   // cout<<"end";
    //cout<<max<<endl;
    return max;

}
int main()
{
    node* root=NULL;
    int a[]={6,8,3,5,9,2,1,4,7,10,11};
    int size=sizeof(a)/sizeof(int);
    for(int i=0; i<=size-1; i++)
    {
        //cout<<"abhi"<<endl;
        insert(&root,a[i]);
    }
    //cout<<root->data<<endl;
    cout<<"\n Preorder: \n";
   preorder(root);
   cout<<"\n Inorder :"<<endl;
   inorder(root);
   cout<<"\n Postorder :"<<endl;
   postorder(root);
   cout<<endl;
   cout<<"Depth = "<<depth(root)<<endl;
   cout<<"Width = "<<maxbreadth(root)<<endl;


    return 0;
}
